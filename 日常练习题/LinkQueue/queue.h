#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int DataType;

typedef struct Node
{
	struct Node* next;
	DataType data;
}Node;


typedef struct Queue
{
	Node* phead;
	Node* ptail;
}Queue;


//-----�ӿ�------

//��ʼ��
void QueueInit(Queue* que);
//����
void QueueDestroy(Queue* que);
//���
void QueuePush(Queue* que, DataType val);
//����
void QueuePop(Queue* que);
//�п�
bool QueueIsEmpty(Queue* que);
//��С
int QueueSize(Queue* que);
//��ȡ��ͷԪ��
DataType QueueFront(Queue* que);
//��ȡ��βԪ��
DataType QueueTail(Queue* que);