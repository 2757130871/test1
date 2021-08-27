#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef int DataType;

typedef struct CQueue 
{
	DataType* que;
	int head;
	int tail;
	int capacity;
}CQueue;


void CQueueInit(CQueue* CQue,int capacity);
void CQueueDestroy(CQueue* CQue);

void CQueuePush(CQueue* CQue,DataType val);
void CQueuePop(CQueue* CQue);

//返回队头元素 为空返回-1
DataType CQueueHead(CQueue* CQue);

bool IsEmpty(CQueue* CQue);
bool IsFull(CQueue* CQue);
