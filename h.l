%{
#include <stdlib.h>
#include <string.h>
#include "h.tab.h"
#include "node.h"
void yyerror(char *);
extern int line;
extern YYSTYPE yylval;
%}

COM \/\/[^\n]*
COMBD "/*"[/]*([^*/][/]*|[*])*"*/"
NE !=
NOT !
AND \&\&
AD \&
NOR \|\|
OR \|
NMORE <=
NLESS >=
LESS <
MORE >
SLFPLS "++"
SLFRDC "--"
ADE "+="
SBE "-="
MLE "*="
DVE "/="
ADD "+"
SUB "-"
MUL "*"
DIV "/"
MOLD %
EQ ==
ASSIGN =
QUEC ('[_0-9A-Za-z]')
QUES ("[^\\]+")
NUMBER [1-9][0-9]*|[0]
FLNUM [0-9]*[.][0-9]+([eE][+-]?[0-9]*|[0])?f?
INT int
CHAR char
FOR for
IF if
ELSE else
WHILE while
OUTPUT output
INPUT input
MAIN main
ID [_A-Za-z][_0-9A-Za-z]*

%%
{COM}				;
{COMBD}				;
{NE}				{ return NE; }
{NOT}				{ return NOT; }
{AND}				{ return AND; }
{AD}				{ return AD; }
{NOR}				{ return NOR; }
{OR}				{ return OR; }
{NMORE}				{ return NMORE; }
{LESS}				{ return LESS; }
{NLESS}				{ return NLESS; }
{MORE}				{ return MORE; }
{SLFPLS}			{ return SLFPLS; }
{SLFRDC}			{ return SLFRDC; }
{ADE}				{ return ADE; }
{ADD}				{ return ADD; }
{SBE}				{ return SBE; }
{SUB}				{ return SUB; }
{MLE}				{ return MLE; }
{MUL}				{ return MUL; }
{DVE}				{ return DVE; }
{DIV}				{ return DIV; }
{MOLD}				{ return MOLD; }
{EQ}            	{ return EQ; }
{ASSIGN}            { return ASSIGN; }
{QUEC}              { TreeNode *t = newExpNode(ConstK);
					  t->attr.val = yytext[1];
					  t->type = Char;
					  //printf("%d",t->attr.val);
					  yylval.p=t;
					  return QUEC; }
{NUMBER}        	{ TreeNode *t = newExpNode(ConstK);
					  t->type = Integer;
					  t->attr.val = atoi(yytext);
					  yylval.p=t;
					  return NUMBER; }
{FLNUM}				{ TreeNode *t = newExpNode(ConstK);
					  t->attr.val = atof(yytext);
					  yylval.p=t;
					  return FLNUM; }
{INT}				{ TreeNode *t = newExpNode(KeyK);
					  t->type = Integer;
					  yylval.p=t;
					  return INT;
					}
{CHAR}				{ TreeNode *t = newExpNode(KeyK);
					  t->type = Char;
					  yylval.p=t;
					  return CHAR;
					}
{FOR}				{ return FOR; }
{IF}				{ return IF; }
{ELSE}				{ return ELSE; }
{WHILE}				{ return WHILE; }
{INPUT}				{ return INPUT; }
{OUTPUT}			{ return OUTPUT; }
{MAIN}				{ return MAIN; }
{ID} 				{ TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
					  for(int i=0; i<MAXCHILDREN; i++)
					    t->child[i] = NULL;
					  t->sibling = NULL;
					  t->nodekind = ExpK;
					  t->kind = IdK;
					  t->lineno = line++;

					  t->attr.name = malloc(strlen(yytext));
					  strcpy(t->attr.name,yytext);

					  t->type = Nothing;
					  yylval.p=t;
					  return ID;
					}

[(]             	{ return LP; }
[)]             	{ return RP; }
[,]				    { return COMMA; }
[;]            		{ return SEMI; }
[{]            		{ return LBRACE; }
[}]				    { return RBRACE; }
[\n]          		{ yylineno++; }
[\t]+          		;
[ ]           		;
.         			;
%%

int yywrap() {
  return 1;
}