#define StackEntry int
#define MaxSize 100
#define NULL 0


typedef struct stacknode{
StackEntry entry ;
struct stacknode *next ;
//int size;
}StackNode;

typedef struct stack{
StackNode *top ;
}Stack;

void CreatStack(Stack *ps);
int push (StackEntry e , Stack *ps);
int StackFull(Stack *ps);
void pop (StackEntry *pe , Stack *ps);
int StackEmpty(Stack *ps);
void ClearStack(Stack *ps);
void StackTop(StackEntry *pe , Stack *ps);
int StackSize(Stack *ps);
void TraverseStack(Stack *ps , void (*pf)(StackEntry));
