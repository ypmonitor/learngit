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
	if (S.top - S.base == S.stackSize) // ջ��
		return ERROR;
	*S.top++ = e;
	return OK;
}

Status Pop(SqStack &S, SElemType &e)
{
	if (S.top == S.base) // ջ��
		return ERROR;
	e  = *--S.top;
	return OK;
}

Status GetTop(SqStack S, SElemType &e)
{
	if (S.top == S.base)	 return ERROR; 	// ջ��
	e = *(S.top - 1);
	return OK;
}


void conversion(int N)
{//��������һ���Ǹ�ʮ����������ӡ��������ֵ�İ˽�����
	SqStack S;
	SElemType e;
	InitStack(S);	//��ʼ����ջS
	while (N)	//��N����ʱ,ѭ��
	{
		Push(S, N % 8);	//��N��8����õ��İ˽�����ѹ��ջS
		N = N / 8;		//N����ΪN��8����
	}
	while (!StackEmpty(S))//��ջS�ǿ�ʱ��ѭ��
	{
		Pop(S, e);		//����ջ��Ԫ��e
		cout << e;		//���e
	}
}

int  huwen(char a[])
{//��������һ���Ǹ�ʮ����������ӡ��������ֵ�İ˽�����
	SqStack S;
	SElemType e;
	InitStack(S);	//��ʼ����ջS
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
