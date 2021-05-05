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

//����һ������
LinkQueue* CreateQueue();

//��ʼ������
void InitQueue(LinkQueue* L);

//���
void EnQueue(LinkQueue* L, Elemtype e);

//����
void DeQueue(LinkQueue* L, Elemtype* e);

