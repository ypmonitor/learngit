#pragma once

#define OK 1
#define ERROR 0
#define OVERFLOW -2


typedef int Status;
typedef int QElemType;
#define MAXQSIZE  100   //最大队列长度
typedef struct {
	QElemType *base;  //初始化的动态分配存储空间
	int  front;            //头指针   
	int  rear;             //尾指针
}SqQueue;

Status InitQueue(SqQueue &Q);
int  QueueLength(SqQueue Q);
Status EnQueue(SqQueue &Q, QElemType e);
Status DeQueue(SqQueue &Q, QElemType &e);
QElemType GetHead(SqQueue Q);
void QueueTraverse(SqQueue Q);
bool StackEmpty(SqQueue S);
void DestroyStack(SqQueue S);
SqQueue MergeSqQueue(SqQueue &S);