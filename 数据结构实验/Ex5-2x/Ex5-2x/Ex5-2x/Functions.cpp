#pragma once
#include <iostream>
#include "Ex5-2x.h"
using namespace std;

Status InitQueue(SqQueue &Q) {
	Q.base = new QElemType[MAXQSIZE];
		if (!Q.base) exit(OVERFLOW);
	Q.front = Q.rear = 0;
	return OK;
}

int  QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

Status EnQueue(SqQueue &Q, QElemType e) {
	if ((Q.rear + 1) % MAXQSIZE == Q.front)  return ERROR;
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXQSIZE;
	return OK;
}

Status DeQueue(SqQueue &Q, QElemType &e) {
	if (Q.front == Q.rear) return ERROR;
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXQSIZE;
	return OK;
}


QElemType GetHead(SqQueue Q) {
	if (Q.front != Q.rear)
		return Q.base[Q.front];
}

bool StackEmpty(SqQueue S)
{
	if (S.front == S.rear) return true;
	else return false;
}

void QueueTraverse(SqQueue Q) {
	int  p;
	p = Q.front;
	while (p != Q.rear)
		cout << Q.base[p++] << endl;
}

void DestroyStack(SqQueue S) {
	delete[] S.base;
}