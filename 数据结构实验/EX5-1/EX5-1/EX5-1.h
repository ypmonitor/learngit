#ifndef _EX5_H_
#define _EX5_H_
#define OK 1
#define ERROR 0
#define OVERFLOW -1

#define  MAXSIZE  100
typedef int Status;
typedef int SElemType;

typedef struct
{
	SElemType   *base;
	SElemType   *top;
	int stackSize;
}SqStack;

Status InitStack(SqStack &S);
bool StackEmpty(SqStack S);
int StackLength(SqStack S);
Status ClearStack(SqStack S);
Status DestroyStack(SqStack &S);
Status Push(SqStack &S, SElemType e);
Status Pop(SqStack &S, SElemType &e);
Status GetTop(SqStack S, SElemType &e);
void conversion(int N);
int  huwen(char a[]);
#endif