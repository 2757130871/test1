#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef int DataType;


typedef struct Node
{
	struct Node* next;
	DataType val;
}Node;

typedef struct CQueue
{
	DataType* arr;
	int head;
	int tail;
	int capacity;

}CQueue;

//初始化
void  CQueueInit(CQueue* que,int capacity);
//销毁
void  CQueueDestroy(CQueue* que);
//入队
void  CQueuePush(CQueue* que, DataType val);
//出队
void  CQueuePop(CQueue* que);
//返回队头元素  为空返回-1
DataType CQueueFront(CQueue* que);
//判空
bool IsEmpty(CQueue* que);
//判满
bool IsFull(CQueue* que);
