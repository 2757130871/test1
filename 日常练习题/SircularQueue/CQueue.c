#include "queue.h"


//初始化
CQueue* CQueueInit(int sz)
{

	CQueue* que = (CQueue*)malloc(sizeof(CQueue));
	assert(que);

	que->arr = (DataType*)malloc(sizeof(int) * (sz + 1));
	assert(que->arr);

	que->capacity = sz;
	que->front = que->rear = 0;

	return que;
}
//销毁
void CQueueDestroy(CQueue* que)
{
	assert(que);
	free(que->arr);
	free(que);
}
//入队
void CQueuePush(CQueue* que, DataType val)
{
	assert(que);
	if (CQueueIsFull(que))
		return;
	que->arr[que->rear] = val;
	que->rear++;
	que->rear %= (que->capacity + 1);

}
//出队
void CQueuePop(CQueue* que)
{
	assert(que);

	if (CQueueIsEmpty(que))
		return;

	que->front++;
	que->front %= (que->capacity + 1);
}


//队头
DataType CQueueFront(CQueue* que)
{
	assert(que);

	if (CQueueIsEmpty(que))
		return -1;

	return que->arr[que->front];
}

//队尾
DataType CQueueRear(CQueue* que)
{
	assert(que);

	if (CQueueIsEmpty(que))
		return -1;

	int prev = que->rear - 1;
	if (prev == -1)
		prev = que->capacity;
	return que->arr[prev];
}


//判空
bool CQueueIsEmpty(CQueue* que)
{
	assert(que);
	return que->front == que->rear;
}

//判满
bool CQueueIsFull(CQueue* que)
{
	assert(que);
	return (que->rear + 1) % (que->capacity + 1) == que->front;
}

