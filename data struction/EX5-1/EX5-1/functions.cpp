#include "EX5-1.h"
#include <iostream>
using namespace std;

Status InitStack(SqStack &S)
{
	S.base = new SElemType[MAXSIZE];
	if (!S.base) 	return OVERFLOW;
	S.top = S.base;
	S.stackSize = MAXSIZE;
	return OK;
}

bool StackEmpty(SqStack S)
{
	if (S.top == S.base) return true;
	else return false;
}

int StackLength(SqStack S)
{
	return S.top - S.base;
}

Status ClearStack(SqStack S)
{
	if (S.base) S.top = S.base;
	return OK;
}

Status DestroyStack(SqStack &S)
{
	if (S.base)
	{
		delete S.base;
		S.stackSize = 0;
		S.base = S.top = NULL;
	}
	return OK;
}

Status Push(SqStack &S, SElemType e)
{
	if (S.top - S.base == S.stackSize) // 栈满
		return ERROR;
	*S.top++ = e;
	return OK;
}

Status Pop(SqStack &S, SElemType &e)
{
	if (S.top == S.base) // 栈空
		return ERROR;
	e  = *--S.top;
	return OK;
}

Status GetTop(SqStack S, SElemType &e)
{
	if (S.top == S.base)	 return ERROR; 	// 栈空
	e = *(S.top - 1);
	return OK;
}


void conversion(int N)
{//对于任意一个非负十进制数，打印输出与其等值的八进制数
	SqStack S;
	SElemType e;
	InitStack(S);	//初始化空栈S
	while (N)	//当N非零时,循环
	{
		Push(S, N % 8);	//把N与8求余得到的八进制数压入栈S
		N = N / 8;		//N更新为N与8的商
	}
	while (!StackEmpty(S))//当栈S非空时，循环
	{
		Pop(S, e);		//弹出栈顶元素e
		cout << e;		//输出e
	}
}

int  huwen(char a[])
{//对于任意一个非负十进制数，打印输出与其等值的八进制数
	SqStack S;
	SElemType e;
	InitStack(S);	//初始化空栈S
	int n = strlen(a);
	for (int i = 0; i < n; i++){
		Push(S, a[i]);
	}
	for (int i = 0; i < n / 2; i++){
		Pop(S, e);
		if (e != a[i])
			return false;
	}
	return true;
}
