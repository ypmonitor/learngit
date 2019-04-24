#ifndef _EX5_2_
#define _EX5_2_
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int SElemType;


typedef  struct StackNode {
      SElemType  data;
      struct StackNode *next;
 } StackNode,  *LinkStack;

void InitStack(LinkStack &S );
Status StackEmpty(LinkStack S);
Status Push(LinkStack &S , SElemType e);
Status Pop (LinkStack &S,SElemType &e);
SElemType GetTop(LinkStack S);
void DestroyStack(LinkStack &S);
#endif
