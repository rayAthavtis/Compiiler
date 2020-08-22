%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"
int yylex(void);
void yyerror(char *);
extern FILE *yyin;
extern FILE *yyout;
struct TreeNode *root;
int line = 0;
//struct IdType IDTable[26];
char IDMem[26][26];
int IDtype[26];
int idno = 0;
int curid = 0;
int temp_var_seq = 0;
int num = 0;
%}

%union {
  struct TreeNode *p;
}
%type<p> function stmt_list stmt exp decl_stmt type if_stmt for_stmt while_stmt declist
%token<p> QUEC NUMBER FLNUM ID LP RP COMMA SEMI LBRACE RBRACE IF ELSE WHILE RETURN FOR INT CHAR INPUT OUTPUT MAIN
%nonassoc IFX     //无结合性，有关优先级
%nonassoc ELSE
%right<p> ASSIGN ADE SBE MLE DVE
%left<p> NOR
%left<p> AND
%left<p> OR
%left<p> AD
%left<p> NE EQ
%left<p> NMORE NLESS LESS MORE
%left<p> ADD SUB
%left<p> MUL DIV MOLD
%right<p> NOT
%left<p> SLFPLS SLFRDC
%left BHSP BHSR
%right UMINUS
%%

function:
MAIN LP RP stmt           { $$ = $4;
                            //printf("hello: \n");
                            //Display($4);
                            //printf("\ntypecheck: \n");
                            root = $4;
                            typecheck(root);
                            get_temp(root);
                            get_label(root);
                            gen_code();
                            exit(0);
                          }
;
stmt_list:
stmt                      { $$ = $1; }
| stmt stmt_list          { $$ = $1; $$->sibling = $2; }
;
stmt:
SEMI
| exp SEMI                { $$ = $1; }
| decl_stmt SEMI          { $$ = $1; }
| if_stmt                 { $$ = $1; }
| for_stmt                { $$ = $1; }
| while_stmt              { $$ = $1; }
| LBRACE stmt_list RBRACE { $$ = newStmtNode(LRK);
                            $$->child[0] = $2;
                          }
| INPUT LP exp RP SEMI    { $$ = newStmtNode(InpK);
                            $$->child[0] = $3;
                          }
| OUTPUT LP exp RP SEMI   { $$ = newStmtNode(OupK);
                            $$->child[0] = $3;
                          }
;
decl_stmt:
type declist              { for(; curid < idno; curid++)
                              IDtype[curid] = $1->type;
                            /*
                            struct TreeNode *tmp;
                            tmp = $2;
                            for(; tmp != NULL; tmp = tmp->sibling)
                            {
                              for(int i = 0; i < 26; i++)
                              {
                                if(strcmp(IDTable[i].name, tmp->attr.name) == 0)
                                  IDTable[i].type = $1->type;
                              }
                            }
                            */
                            $$ = newStmtNode(DeclK);
                            $2->type = $1->type;
                            $$->child[0] = $1;
                            $$->child[1] = $2;
                          }
;
type:
INT                       { $$ = $1; }
| CHAR                    { $$ = $1; }
;
declist:
ID                        { $$ = $1;
                            char *tmp = $1->attr.name;
                            for(int j = 0; j < sizeof(tmp); j++)
                              IDMem[idno][j] = tmp[j];
                            idno++;
                            /**/
                            //strcpy(IDTable[idno].name, $1->attr.name);
                            //idno++;
                          }
|ID COMMA declist         { $$ = $1;
                            $$->sibling = $3;
                            char *tmp = $1->attr.name;
                            for(int j = 0; j<sizeof(tmp); j++)
                              IDMem[idno][j] = tmp[j];
                            idno++;
                            /**/
                            //strcpy(IDTable[idno].name, $1->attr.name);
                            //idno++;
                          }
;
exp:
NUMBER 			              { $$ = $1; }
| ID 			                { char *tmp = $1->attr.name;
                            for(int i = 0; IDMem[i][0] != '\0' && i < 26; i++)
                              for(int j = 0; j<sizeof(tmp); j++)
                                if(IDMem[i][j] != tmp[j])
                                  break;
                                else if(j == (sizeof(tmp)-1))
                                  $1->type = IDtype[i];
                            /*
                            for(int i = 0; i < 26; i++)
                            {
                              if(strcmp(IDTable[i].name, $1->attr.name) == 0)
                                $1->type = IDTable[i].type;
                            }
                            */
                            $$ = $1;
                          }
| QUEC                    { $$ = $1; }
| ID ASSIGN exp           { char *tmp = $1->attr.name;
                            for(int i = 0; IDMem[i][0] != '\0' && i < 26; i++)
                              for(int j = 0; j<sizeof(tmp); j++)
                                if(IDMem[i][j] != tmp[j])
                                  break;
                                else if(j == (sizeof(tmp)-1))
                                  $1->type = IDtype[i];
                            /*
                            for(int i = 0; i < 26; i++)
                            {
                              if(strcmp(IDTable[i].name, $1->attr.name) == 0)
                                $1->type = IDTable[i].type;
                            }
                            */
                            $$ = newStmtNode(AssignK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "=";
                          }
| exp ADD exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "+";
                          }
| exp SUB exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "-";
                          }
| exp MUL exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "*";
                          }
| exp DIV exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "/";
                          }
| exp LESS exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "<";
                          }
| exp MORE exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = ">";
                          }
| exp NLESS exp           { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = ">=";
                          }
| exp NMORE exp           { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "<=";
                          }
| exp NE exp 	            { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "!=";
                          }
| exp EQ exp 	            { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "==";
                          }
| exp AND exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "&&";
                          }
| exp NOR exp 	          { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "||";
                          }
| exp AD exp 	            { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "&";
                          }
| exp OR exp 	            { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                            $$->attr.op = "|";
                          }
| NOT exp                 { $$ = newExpNode(OpK);
                            $$->child[0] = $2;
                            $$->attr.op = "!";
                          }
| exp SLFPLS              { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->attr.op = "++";
                          }
| exp SLFRDC              { $$ = newExpNode(OpK);
                            $$->child[0] = $1;
                            $$->attr.op = "--";
                          }
| LP exp RP               { $$ = $2; }
| SUB exp %prec UMINUS
;
if_stmt:
IF LP exp RP stmt %prec IFX              { $$ = newStmtNode(IfK);
                    		                   $$->child[0] = $3;
                    		                   $$->child[1] = $5;
                    		                 }
| IF LP exp RP stmt ELSE stmt %prec ELSE { $$ = newStmtNode(IfK);
                      		                 $$->child[0] = $3;
                      		                 $$->child[1] = $5;
                      		                 $$->child[2] = $7;
                      		               }
;
for_stmt:
FOR LP exp SEMI exp SEMI exp RP stmt { $$ = newStmtNode(ForK);
                                       $$->child[0] = $3;  //decl
                                       $$->child[1] = $5;  //opt
                                       $$->child[2] = $7;  //inc
                                       $$->child[3] = $9;  //lr
                                     }
| FOR LP SEMI exp SEMI exp RP stmt   { $$ = newStmtNode(ForK);
                                       $$->child[1] = $4;  //opt
                                       $$->child[2] = $6;  //inc
                                       $$->child[3] = $8;  //lr
                                     }
| FOR LP exp SEMI SEMI exp RP stmt   { $$ = newStmtNode(ForK);
                                       $$->child[0] = $3;  //decl
                                       $$->child[2] = $6;  //inc
                                       $$->child[3] = $8;  //lr
                                     }
| FOR LP exp SEMI exp SEMI RP stmt   { $$ = newStmtNode(ForK);
                                       $$->child[0] = $3;  //decl
                                       $$->child[1] = $5;  //opt
                                       $$->child[3] = $8;  //lr
                                     }
| FOR LP SEMI SEMI exp RP stmt       { $$ = newStmtNode(ForK);
                                       $$->child[2] = $5;  //inc
                                       $$->child[3] = $7;  //opt
                                     }
| FOR LP SEMI exp SEMI RP stmt       { $$ = newStmtNode(ForK);
                                       $$->child[1] = $4;
                                       $$->child[3] = $7;
                                     }
| FOR LP exp SEMI SEMI RP stmt       { $$ = newStmtNode(ForK);
                                       $$->child[0] = $3;
                                       $$->child[3] = $7;
                                     }
;
while_stmt:
WHILE LP exp RP stmt      { $$ = newStmtNode(WhileK);
                            $$->child[0] = $3;
                            $$->child[1] = $5;
                          }
%%

TreeNode *newStmtNode(StmtKind kind)
{
  TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
  if(t == NULL)
    printf("Out of memory error. ");
  else
  {
    for(int i=0; i<MAXCHILDREN; i++)
      t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = StmtK;
    t->kind = kind;
    t->lineno = line++;
  }
  return t;
}

TreeNode *newExpNode(ExpKind kind)
{
  TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
  if(t == NULL)
    printf("Out of memory error. ");
  else
  {
    for(int i=0; i<MAXCHILDREN; i++)
      t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = ExpK;
    t->kind = kind;
    t->lineno = line++;
  }
  return t;
}

void typecheck(struct TreeNode *p)
{
  struct TreeNode *tmp;
  for(int i=0; i<MAXCHILDREN; i++)
    if(p->child[i]!=NULL)
      typecheck(p->child[i]);
  printf("%d: ", p->lineno);
  //fprintf(yyout, "%d: ", p->lineno);
  if(p->nodekind==1)  //表达式
  {
    if(p->kind==0)  //操作符
    {
      if(!strcmp(p->attr.op, "+")||!strcmp(p->attr.op, "-")||!strcmp(p->attr.op, "*")||!strcmp(p->attr.op, "/")||!strcmp(p->attr.op, "&")||!strcmp(p->attr.op, "|"))
      {
        if(p->child[0]->type != Integer || p->child[1]->type != Integer)
          printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
          p->type = Integer;
          if(p->child[0]->type == Char)
          {
            //p->child[0]->attr.val = int(get_val((p->child[0]->attr.name));
            p->child[0]->type = Integer;
          }
          if(p->child[1]->type == Char)
          {
            //p->child[1]->attr.val = int(get_val((p->child[1]->attr.val));
            p->child[1]->type = Integer;
          }
        else
          p->type = p->child[0]->type;
      }
      else if(!strcmp(p->attr.op, "&&")||!strcmp(p->attr.op, "||"))
      {
        if(p->child[0]->type != Bool || p->child[1]->type != Bool)
          printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
          p->type = Bool;
          if(p->child[0]->type != Bool)
          {
            //p->child[0]->attr.val = bool(p->child[0]->attr.val);
            p->child[0]->type = Bool;
          }
          if(p->child[1]->type != Bool)
          {
            //p->child[1]->attr.val = bool(p->child[1]->attr.val);
            p->child[1]->type = Bool;
          }
        else
          p->type = p->child[0]->type;
      }
      else if(!strcmp(p->attr.op, "!"))
      {
        if(p->child[0]->type != Bool)
        {
          printf("error: %d with %s \n", p->child[0]->type, p->attr.op);  //fprintf(yyout, "error: %d with %s \n", p->child[0]->type, p->attr.op);
          p->type = Bool;
        }
        else
          p->type = p->child[0]->type;
      }
      else if(!strcmp(p->attr.op, ">")||!strcmp(p->attr.op, "<")||!strcmp(p->attr.op, ">=")||!strcmp(p->attr.op, "<=")||!strcmp(p->attr.op, "==")||!strcmp(p->attr.op, "!="))
      {
        if(p->child[0]->type != p->child[1]->type)
          printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
        p->type = Bool;
      }
      printf("Expr    op: %s  ", p->attr.op);  //fprintf(yyout, "Expr    op: %s  ", p->attr.op);
    }
    else if(p->kind==1)
      printf("Const    value: %d  ", p->attr.val);  //fprintf(yyout, "Const    value: %d  ", p->attr.val);
    else if(p->kind==2)
      printf("ID    symbol: %s  ", p->attr.name);  //fprintf(yyout, "ID    symbol: %s  ", p->attr.name);
    else if(p->kind==3)
    {
      if(p->type == 0)
        printf("Type    integer    ");  //fprintf(yyout, "Type    integer    ");
      else if(p->type == 1)
        printf("Type    char       ");  //fprintf(yyout, "Type    char       ");
      else if(p->type == 2)
        printf("Type    void       ");  //fprintf(yyout, "Type    void       ");
      else if(p->type == 3)
        printf("Type    bool       ");  //fprintf(yyout, "Type    bool       ");
    }
  }
  else  //句型
  {
    if(p->kind==0)  //声明语句
    {
      p->type = Void;
      printf("Decl              ");  //fprintf(yyout, "Decl              ");
    }
    else if(p->kind==1)  //if语句
    {
      p->type = Void;
      if(p->child[0]->type != Bool)
        printf("error: %d in if_stmt \n", p->child[0]->type);  //fprintf(yyout, "error: %d in if_stmt \n", p->child[0]->type);
      printf("If                ");  //fprintf(yyout, "If                ");
    }
    else if(p->kind==2)  //for语句
    {
      if(p->child[1])
        if(p->child[1]->type != Bool)
          printf("error: %d in for_stmt \n", p->child[0]->type);  //fprintf(yyout, "error: %d in for_stmt \n", p->child[0]->type);
      p->type = Void;
      printf("For               ");  //fprintf(yyout, "For               ");
    }
    else if(p->kind==3)  //while语句
    {
      p->type = Void;
      if(p->child[0]->type != Bool)
        printf("error: %d in if_stmt \n", p->child[0]->type);  //fprintf(yyout, "error: %d in if_stmt \n", p->child[0]->type);
      printf("While             ");  //fprintf(yyout, "While             ");
    }
    else if(p->kind==4) //赋值语句
    {
      if(p->child[0]->type!=p->child[1]->type)
        printf("error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);  //fprintf(yyout, "error: %d, %d with %s \n", p->child[0]->type, p->child[1]->type, p->attr.op);
      p->type = p->child[0]->type;
      printf("Assign            ");  //fprintf(yyout, "Assign            ");
    }
    else if(p->kind==5)  //输入
    {
      if(p->child[0]->type==Bool)
        printf("error: %d \n", p->child[0]->type);  //fprintf(yyout, "error: %d \n", p->child[0]->type);
      p->type = Void;
      printf("Inp               ");  //fprintf(yyout, "Inp               ");
    }
    else if(p->kind==6)  //输出
    {
      if(p->child[0]->type==Bool)
        printf("error: %d \n", p->child[0]->type);  //fprintf(yyout, "error: %d \n", p->child[0]->type);
      p->type = Void;
      printf("Oup               ");  //fprintf(yyout, "Oup               ");
    }
    else if(p->kind==7)  //复合语句
    {
      p->type = Void;
      printf("LRK               ");  //fprintf(yyout, "LRK               ");
    }
  }
  printf("children: ");  //fprintf(yyout, "children: ");
  for(int i=0; i<MAXCHILDREN; i++)
  {
    if(p->child[i]!=NULL)
    {
      //Display(p->child[i]);
      printf("%d ", p->child[i]->lineno);  //fprintf(yyout, "%d ", p->child[i]->lineno);
      struct TreeNode *tp;
      tp = p->child[i]->sibling;
      while(tp!=NULL)
      {
        printf("%d ", tp->lineno);  //fprintf(yyout, "%d ", tp->lineno);
        tp = tp->sibling;
      }
    }
  }
  printf("\n");  //fprintf(yyout, "\n");
  tmp = p->sibling;
  if(tmp!=NULL)
    typecheck(tmp);
  return ;
}

//生成头
void gen_header()
{
  fprintf(yyout, ".586\n.model flat, stdcall\noption casemap :none\n\n");
  fprintf(yyout, "include \\masm32\\include\\windows.inc\n");
  fprintf(yyout, "include \\masm32\\include\\user32.inc\n");
  fprintf(yyout, "include \\masm32\\include\\kernel32.inc\n");
  fprintf(yyout, "include \\masm32\\include\\masm32.inc\n");
  fprintf(yyout, "include \\masm32\\include\\msvcrt.inc\n\n");
  fprintf(yyout, "includelib \\masm32\\lib\\msvcrt.lib\n");
  fprintf(yyout, "includelib \\masm32\\lib\\user32.lib\n");
  fprintf(yyout, "includelib \\masm32\\lib\\kernel32.lib\n");
  fprintf(yyout, "includelib \\masm32\\lib\\masm32.lib\n");
}

//语句贴标号
void stmt_get_label(TreeNode *t)
{
  switch(t->kind)
  {
    case WhileK:  //while循环语句
    {
      TreeNode *e = t->child[0];
      TreeNode *s = t->child[1];
      if(t->begin_label == NULL)
        t->begin_label = new_label();
      s->next_label = t->begin_label;
      s->begin_label = e->true_label = new_label();
      if(t->next_label == NULL)
        t->next_label = new_label();
      e->false_label = t->next_label;
      if(t->sibling)
        t->sibling->begin_label = t->next_label;
      //recursive_get_label(e);
      //recursive_get_label(s);
      break;
    }
    case IfK:
    {
      TreeNode *e = t->child[0];
      TreeNode *s = t->child[1];
      TreeNode *s2 = t->child[2];
      if(e->true_label == NULL)
        e->true_label = new_label();
      s->begin_label = e->true_label;  //if体开始 真值出口
      if(t->next_label == NULL)
        t->next_label = new_label();  //if体下一条语句的标号
      if(s2)
      {
        if(e->false_label == NULL)
          e->false_label = new_label();
        s2->begin_label = e->false_label;  //假值出口
      }
      else{
        e->false_label = t->next_label;  //假值出口
      }
      if(t->sibling)
        t->sibling->begin_label = t->next_label;  //兄弟节点的开始标号及此语句下一标号
      break;
    }
    case ForK:
    {
      TreeNode *s0 = t->child[0];
      TreeNode *e = t->child[1];
      TreeNode *s2 = t->child[2];
      TreeNode *s3 = t->child[3];
      if(t->begin_label == NULL)
        t->begin_label = new_label();
      if(s0)
      {
        s0->begin_label = t->begin_label;
        t->begin_label = new_label();
      }
      if(s2)
        s2->next_label = t->begin_label;  //继续循环
      else
        s3->next_label = t->begin_label;
      if(e->true_label == NULL)
        e->true_label = new_label();
      if(s3)
        s3->begin_label = e->true_label;  //真值出口
      else if(s2)
        s2->begin_label = e->true_label;
      if(t->next_label == NULL)
        t->next_label = new_label();
      e->false_label = t->next_label;  //循环结束，假值出口
      if(t->sibling)
        t->sibling->begin_label = t->next_label;
      break;
    }
  }
}

//表达式贴标号
void expr_get_label(TreeNode *t)
{
  if(t->type != Bool)
    return ;
  TreeNode *e1 = t->child[0];
  TreeNode *e2 = t->child[1];
  if(strcmp(t->attr.op, "&&") == 0)
  {
    if(e1->true_label == NULL)
      e1->true_label = new_label();
    e2->true_label = t->true_label;
    e1->false_label = e2->false_label = t->false_label;
    e2->begin_label = e1->true_label;
  }
  else if(strcmp(t->attr.op, "||") == 0)
  {
    if(e1->false_label == NULL)
      e1->false_label = new_label();
    e2->false_label = t->false_label;
    e1->true_label = e2->true_label = t->true_label;
    e2->begin_label = e1->false_label;
  }
  else if(strcmp(t->attr.op, "!") == 0)
  {
    e1->true_label = t->false_label;
    e1->false_label = t->true_label;
  }
  //if(e1)
    //recursive_get_label(e1);
  //if(e2)
    //recursive_get_label(e2);
}

//贴标号
void get_label(struct TreeNode *p)
{
  if(p->nodekind == StmtK)
    stmt_get_label(p);
  else if(p->nodekind == ExpK)
    expr_get_label(p);
  struct TreeNode *tmp;
  for(int i=0; i<MAXCHILDREN; i++)
    if(p->child[i]!=NULL)
      get_label(p->child[i]);
  tmp = p->sibling;
  if(tmp!=NULL)
    get_label(tmp);
}

//临时变量
void get_temp(struct TreeNode *p)
{
  struct TreeNode *tmp;
  for(int i=0; i<MAXCHILDREN; i++)
    if(p->child[i]!=NULL)
      get_temp(p->child[i]);
  tmp = p->sibling;
  if(tmp!=NULL)
    get_temp(tmp);
  get_temp_var(p);
}

//生成声明语句（数据段）
void gen_decl(TreeNode *t)
{
  fprintf(yyout, "\n\n.data\n");
  for(;t->kind == DeclK; t = t->sibling)
  {
    TreeNode *p = t->child[1];
    if(p->type == Integer)
      for(; p; p = p->sibling)
          fprintf(yyout, "\t_%s DWORD 0\n", p->attr.name);
    else if(p->type == Char)
      for(; p; p = p->sibling)
        fprintf(yyout, "\t_%s BYTE 0\n", p->attr.name);
  }
  for(int i = 0; i < temp_var_seq; i++)
    fprintf(yyout, "\tt%d DWORD 0\n", i);
  fprintf(yyout, "\tbuffer BYTE 128 dup(0)\n");
  fprintf(yyout, "\tdata1 db '%s', 0\n", "%d");
  fprintf(yyout, "\tvac db ' ', 0\n");
}

//表达式代码
void expr_gen_code(TreeNode *t)
{
  if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
  TreeNode *e1 = t->child[0];
  TreeNode *e2 = t->child[1];
  if(e1)
    recursive_gen_code(e1);
  if(e2)
    recursive_gen_code(e2);
  if(!strcmp(t->attr.op, "+"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tADD eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "-"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tSUB eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "*"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV ebx, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMUL ebx\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "/"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV ebx, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tDIV ebx\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "&"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tAND eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "|"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tOR eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "++"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tINC eax");
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "--"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tDEC eax");
    fprintf(yyout, "\n");
    fprintf(yyout, "\tMOV t%d, eax\n", t->temp_var);
  }
  else if(!strcmp(t->attr.op, "<"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjl %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, ">"))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjg %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, "<="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjng %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, ">="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjnl %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, "=="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tje %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
  else if(!strcmp(t->attr.op, "!="))
  {
    fprintf(yyout, "\tMOV eax, ");
    if(e1->kind == IdK)
      fprintf(yyout, "_%s", e1->attr.name);
    else if(e1->kind == ConstK)
      fprintf(yyout, "%d", e1->attr.val);
    else
      fprintf(yyout, "t%d", e1->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tCMP eax, ");
    if(e2->kind == IdK)
      fprintf(yyout, "_%s", e2->attr.name);
    else if(e2->kind == ConstK)
      fprintf(yyout, "%d", e2->attr.val);
    else
      fprintf(yyout, "t%d", e2->temp_var);
    fprintf(yyout, "\n");
    fprintf(yyout, "\tjne %s\n", t->true_label);  //为真
    fprintf(yyout, "\tjmp %s\n", t->false_label);  //为假
  }
}

//语句代码
void stmt_gen_code(TreeNode *t)
{
  if(t->kind == AssignK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[1]);
    TreeNode *e1 = t->child[0];
    TreeNode *e2 = t->child[1];
    if(e1->type == Integer)
    {
      fprintf(yyout, "\tMOV eax, ");
      if(e2->kind == IdK)
        fprintf(yyout, "_%s", e2->attr.name);
      else if(e2->kind == ConstK)
        fprintf(yyout, "%d", e2->attr.val);
      else
        fprintf(yyout, "t%d", e2->temp_var);
      fprintf(yyout, "\n");
      fprintf(yyout, "\tMOV ");
      if(e1->kind == IdK)
        fprintf(yyout, "_%s", e1->attr.name);
      else if(e1->kind == ConstK)
        fprintf(yyout, "%d", e1->attr.val);
      else
        fprintf(yyout, "t%d", e1->temp_var);
      fprintf(yyout, ", eax\n");
    }
    else if(e2->type == Char)
    {
      fprintf(yyout, "\tMOV al, ");
      if(e2->kind == IdK)
        fprintf(yyout, "_%s", e2->attr.name);
      else if(e2->kind == ConstK)
        fprintf(yyout, "%d", e2->attr.val);
      else
        fprintf(yyout, "t%d", e2->temp_var);
      fprintf(yyout, "\n");
      fprintf(yyout, "\tMOV ");
      if(e1->kind == IdK)
        fprintf(yyout, "_%s", e1->attr.name);
      else if(e1->kind == ConstK)
        fprintf(yyout, "%d", e1->attr.val);
      else
        fprintf(yyout, "t%d", e1->temp_var);
      fprintf(yyout, ", al\n");
    }
  }
  else if(t->kind == LRK)
  {
    for(int i = 0; t->child[i]; i++)
    {
      if(t->begin_label != NULL)
        fprintf(yyout, "%s:\n", t->begin_label);
      recursive_gen_code(t->child[i]);
      for(TreeNode *p = t->child[i]->sibling; p; p = p->sibling)
        recursive_gen_code(p);
    }
  }
  else if(t->kind == WhileK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[0]);
    recursive_gen_code(t->child[1]);
    fprintf(yyout, "\tjmp %s\n", t->begin_label);
  }
  else if(t->kind == IfK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[0]);
    recursive_gen_code(t->child[1]);
    fprintf(yyout, "\tjmp %s\n", t->next_label);
    if(t->child[2])
    {
      recursive_gen_code(t->child[2]);
    }
  }
  else if(t->kind == ForK)
  {
    recursive_gen_code(t->child[0]);
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[1]);
    recursive_gen_code(t->child[3]);
    recursive_gen_code(t->child[2]);
    fprintf(yyout, "\tjmp %s\n", t->begin_label);
  }
  else if(t->kind == InpK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    if(t->child[0]->type == Integer)
      fprintf(yyout, "\tinvoke crt_scanf, addr data1, addr _%s\n", t->child[0]->attr.name);
    else if(t->child[0]->type == Char)
      fprintf(yyout, "\tinvoke StdIn, addr __%s, 8\n", t->child[0]->attr.name);
  }
  else if(t->kind == OupK)
  {
    if(t->begin_label != NULL)
      fprintf(yyout, "%s:\n", t->begin_label);
    recursive_gen_code(t->child[0]);
    if(t->child[0]->type == Integer)
      fprintf(yyout, "\tinvoke crt_printf, addr data1, ");
    else if(t->child[0]->type == Char)
      fprintf(yyout, "\tinvoke crt_printf, addr ");
    if(t->child[0]->kind == IdK)
      fprintf(yyout, "_%s", t->child[0]->attr.name);
    else if(t->child[0]->kind == ConstK)
      fprintf(yyout, "%d", t->child[0]->attr.val);
    else
      fprintf(yyout, "t%d", t->child[0]->temp_var);
    fprintf(yyout, "\n\tinvoke crt_printf, addr vac\n");
  }
}

//代码段
void recursive_gen_code(TreeNode *t)
{
  if(t->nodekind == StmtK)
    stmt_gen_code(t);
  else if(t->nodekind == ExpK && t->kind == OpK)
    expr_gen_code(t);
}

//计算临时变量需求数
void get_temp_var(TreeNode *t)
{
  if(t->nodekind != ExpK)
    return ;
  if(t->kind != OpK)
    return ;
  if(strcmp(t->attr.op, "+") && strcmp(t->attr.op, "-")
    && strcmp(t->attr.op, "*") && strcmp(t->attr.op, "/"))
    return ;
  TreeNode *arg1 = t->child[0];
  TreeNode *arg2 = t->child[1];
  if(arg1->kind == OpK)
    temp_var_seq--;
  if(arg2 && arg2->kind == OpK)
    temp_var_seq--;
  t->temp_var = temp_var_seq;
  temp_var_seq++;
}

//生成框架
void gen_code()
{
  gen_header();
  TreeNode *p = root->child[0];
  if(p->kind == DeclK)
    gen_decl(p);
  fprintf(yyout, "\n.code\nstart:\n");
  recursive_gen_code(root);
  fprintf(yyout, "L%d:\n\tinvoke crt__getch\n", num);
  fprintf(yyout, "\tinvoke ExitProcess, 0\n");
  fprintf(yyout, "end start\n");
}

char *new_label()
{
  num++;
  char *label = (char *) malloc(sizeof(char)*3);
  if(label == NULL)
    printf("Out of memory error. ");
  sprintf(label, "L%d", num);
  return label;
}

void yyerror(char *s){
  printf("%s\n", s);
}

int main(void){
  yyin = fopen("test.c", "r");
  if(yyin == NULL){
      printf("Can't open file test.c");
      return 1;
  }
  yyout = fopen("output.asm", "w");
  yyparse();
  fclose(yyin);
  fclose(yyout);
  return 0;
}