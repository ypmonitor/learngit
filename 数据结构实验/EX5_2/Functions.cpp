#include <iostream>
#include "EX5_2.h"


void InitStack(LinkStack &S )
{
	S=NULL;
}

Status StackEmpty(LinkStack S)
{   
	if (S==NULL) return true;
	else return false;
}

Status Push(LinkStack &S , SElemType e)
{
	LinkStack p;
	p=new StackNode;     
	if (!p) exit(OVERFLOW);
	p->data=e; 
	p->next=S; S=p; 
	return OK; 
}

Status Pop (LinkStack &S,SElemType &e)
{
	LinkStack p;
	if (S==NULL) 
		return ERROR;
	e = S-> data; 
	p = S;  
	S =  S-> next;
	delete p; 
	return OK;  
}  


SElemType GetTop(LinkStack S)
{
	if (S==NULL) 
		exit(1);
	else 
		return 	S->data;
}

void DestroyStack(LinkStack &S)
{
	if(S==NULL) return;
	LinkStack p;
	while(S){
		p = S;
		S = S->next;
		delete p;
	}
}
