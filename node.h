typedef enum {DeclK,IfK,ForK,WhileK,AssignK,InpK,OupK,LRK} StmtKind;
typedef enum {Integer,Char,Void,Bool,Nothing} ExpType;
typedef enum {StmtK,ExpK} NodeKind;  //0/1
typedef enum {OpK,ConstK,IdK,KeyK} ExpKind;  //0/1/2

#define MAXCHILDREN 4

typedef struct TreeNode
{
    struct TreeNode *child[MAXCHILDREN];  //孩子
    struct TreeNode *sibling;  //兄弟
    int lineno;  //行号
    int nodekind;  //结点类型 stmt
    int kind;  //具体类型 if/op
    union{ char *op;
           int val;
           char *name; }attr;  //属性：操作符/数字/标识符
    ExpType type;  //保存变量类型
    char *true_label;
    char *false_label;
    char *begin_label;
    char *next_label;
    int temp_var;
}TreeNode;

/*
typedef struct IdType
{
    char *name;
    ExpType type;  //保存变量类型
}IdType;
*/

TreeNode *newStmtNode(StmtKind kind);
TreeNode *newExpNode(ExpKind kind);
TreeNode *newKeyNode(ExpKind kind, char *nam);
void Display(struct TreeNode *p);
void typecheck(struct TreeNode *p);
void gen_code();
void get_label();
char *new_label();
void recursive_gen_code(TreeNode *t);
void get_temp(struct TreeNode *p);
void get_temp_var(TreeNode *t);