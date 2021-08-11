#include "CQueue.h"



//初始化
void  CQueueInit(CQueue* que, int capacity)
{
	assert(que);
	que->head = que->tail = 0;
	que->capacity = capacity;
	que->arr = (DataType*)malloc(sizeof(DataType) * (capacity + 1));
	if (!que->arr)
	{
		printf("mail is fail");
		return;
	}
}


//销毁
void  CQueueDestroy(CQueue* que)
{
	assert(que);
	free(que->arr);
	que->arr = NULL;
	que->capacity = que->tail = que->head = 0;
}

//入队
void  CQueuePush(CQueue* que, DataType val)
{
	assert(que);

	if (IsFull(que))
		return;

	que->arr[que->tail] = val;
	que->tail++;
	que->tail %= (que->capacity + 1);

}
//出队
void  CQueuePop(CQueue* que)
{
	assert(que);
	if (IsEmpty(que))
		return;
	que->head++;
	que->head %= (que->capacity + 1);
}

//返回队头元素
DataType CQueueFront(CQueue* que)
{
	assert(que);
	if (IsEmpty(que))
		return -1;
	return que->arr[que->head];
}

//判空
bool IsEmpty(CQueue* que)
{
	assert(que);
	return que->head == que->tail;

}

//判满
bool IsFull(CQueue* que)
{
	assert(que);
	return (que->tail + 1) % (que->capacity + 1) == que->head;
}


