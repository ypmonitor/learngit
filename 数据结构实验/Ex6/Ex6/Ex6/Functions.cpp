#pragma once
#include <iostream>
#include "Ex6.h"
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

SqQueue MergeSqQueue(SqQueue &S)
{
	SqQueue Sx;
	SqQueue R;
	int n;
	QElemType e;
	InitQueue(Sx);
	InitQueue(R);
	cout << "你需要向第二个队列Sx中入队几个元素：";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> e;
		EnQueue(Sx, e);
	}
	n = QueueLength(S) + QueueLength(Sx);
	for (int i = 0; i < n; i++) {
		if (!StackEmpty(S)) {
			DeQueue(S, e);
			EnQueue(R, e);
		}
		if (!StackEmpty(Sx)) {
			DeQueue(Sx,e);
			EnQueue(R, e); 
		}
	}
	DestroyStack(S);
	DestroyStack(Sx);
	cout << "S与Sx合并成功---";
	return R;
}