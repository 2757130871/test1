#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>


//循环队列 数组实现
typedef int DataType;

typedef struct CircularQueue
{
	DataType* arr;
	int front;
	int rear;
	int capacity;
}CQueue;



//-----------------接口------------------

//初始化
CQueue* CQueueInit(int sz);
//销毁
void CQueueDestroy(CQueue* que);
//入队
void CQueuePush(CQueue* que, DataType val);
//出队
void CQueuePop(CQueue* que);
//队头  为空返回-1
DataType CQueueFront(CQueue* que);
//队尾  为空返回-1
DataType CQueueRear(CQueue* que);
//判空
bool CQueueIsEmpty(CQueue* que);
//判满
bool CQueueIsFull(CQueue* que);

