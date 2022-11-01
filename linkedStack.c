
#include "linkedStack.h"
void CreatStack(Stack *ps){
ps->top=NULL;
//ps->size=0;
}

int push (StackEntry e , Stack *ps){
StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
if(!pn)
    return 0;
else
pn->entry =e;
pn->next=ps->top;
ps->top=pn;
return 1;
//ps->size++;
}

void pop (StackEntry *pe , Stack *ps){
StackNode *pn;
*pe=ps->top->entry;
pn=ps->top;
ps->top=ps->top->next;
free(pn);
//ps->size--;
}

int StackEmpty(Stack *ps){
return (ps->top==NULL);
}

int StackFull(Stack *ps){
return 0;
}


void TraverseStack(Stack *ps , void (*pf)(StackEntry)){
StackNode *pn =ps->top;
while(pn){
    (*pf)(pn->entry);
    pn=pn->next;
}
}

int StackSize(Stack *ps){
    int x;
    StackNode *pn =ps->top;
    for( x=0 ; pn ;pn=pn->next)
        x++;
    return x ;
    //return size;
}
