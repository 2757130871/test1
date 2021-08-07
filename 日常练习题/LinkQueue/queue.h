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


//-----接口------

//初始化
void QueueInit(Queue* que);
//销毁
void QueueDestroy(Queue* que);
//入队
void QueuePush(Queue* que, DataType val);
//出队
void QueuePop(Queue* que);
//判空
bool QueueIsEmpty(Queue* que);
//大小
int QueueSize(Queue* que);
//获取队头元素
DataType QueueFront(Queue* que);
//获取队尾元素
DataType QueueTail(Queue* que);