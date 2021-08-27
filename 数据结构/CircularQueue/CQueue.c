#include "CQueue.h"


void CQueueInit(CQueue* CQue, int capacity)
{
	assert(CQue);
	CQue->que = (DataType*)malloc(sizeof(DataType) * (capacity + 1));
	if (CQue->que == NULL)
	{
		printf("Init fail");
		exit(-1);
	}

	CQue->head = 0;
	CQue->tail = 0;
	CQue->capacity = capacity;
}

void CQueueDestroy(CQueue* CQue)
{
	assert(CQue);
	if (CQue->que)
	{
		free(CQue->que);
		CQue->que = NULL;
	}
	CQue->capacity = 0;
	CQue->head = 0;
	CQue->tail = 0;
}

void CQueuePush(CQueue* CQue, DataType val)
{
	assert(CQue);

	if (IsFull(CQue))
		return;
	CQue->que[CQue->tail++] = val;
	CQue->tail %= (CQue->capacity + 1);

}

void CQueuePop(CQueue* CQue)
{
	assert(CQue);

	if (IsEmpty(CQue))
		return;

	CQue->head++;
	CQue->head %= (CQue->capacity + 1);
}

//返回队头元素
DataType CQueueHead(CQueue* CQue)
{
	assert(CQue);

	if (IsEmpty(CQue))
		return -1;

	return CQue->que[CQue->head];
}

bool IsEmpty(CQueue* CQue)
{
	assert(CQue);
	return CQue->tail == CQue->head;
};

bool IsFull(CQueue* CQue)
{
	assert(CQue);
	return   (CQue->tail + 1) % (CQue->capacity + 1) == CQue->head;
}
