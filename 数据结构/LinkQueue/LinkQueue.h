#pragma once

#include <stdio.h>
#define MAXSIZE 10
typedef int Elemtype;

typedef struct QNode
{
	Elemtype data;
	struct QNode* next;

}QNode;

typedef struct LinkQueue
{
	QNode* front;
	QNode* rear;

}LinkQueue;

//创建一个队列
LinkQueue* CreateQueue();

//初始化队列
void InitQueue(LinkQueue* L);

//入队
void EnQueue(LinkQueue* L, Elemtype e);

//出队
void DeQueue(LinkQueue* L, Elemtype* e);

