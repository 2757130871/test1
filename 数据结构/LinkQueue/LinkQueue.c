#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkQueue.h"

//Create 
LinkQueue* CreateQueue()
{
	LinkQueue* head = (LinkQueue*)malloc(sizeof(LinkQueue));
	if (head == NULL)
	{
		printf("malloc fail");
		return NULL;
	}

	return head;
}

//初始化队列
void InitQueue(LinkQueue* L)
{
	QNode* front = (QNode*)malloc(sizeof(QNode));

	L->front = front;
	L->rear = front;
}

//入队
void EnQueue(LinkQueue* L, Elemtype e)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode == NULL)
	{
		printf("malloc fail");
		return;
	}
	newNode->data = e;
	newNode->next = L->front->next;

	L->rear->next = newNode;
	L->rear = newNode;
	return;
}

//出队
void DeQueue(LinkQueue* L, Elemtype* e)
{
	if (L->front == L->rear)
	{
		printf("Queue is Empty");
		return;
	}

	QNode* tmp = L->front->next;
	*e = tmp->data;

	L->front->next = tmp->next;
	if (L->rear == tmp)
		L->rear = L->front;
	free(tmp);

	return;
}

