#pragma once

#define OK 1
#define ERROR 0
#define OVERFLOW -2


typedef int Status;
typedef int QElemType;
#define MAXQSIZE  100   //�����г���
typedef struct {
	QElemType *base;  //��ʼ���Ķ�̬����洢�ռ�
	int  front;            //ͷָ��   
	int  rear;             //βָ��
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