#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef  int SqDataType;
#define INCREMENT 10


typedef struct SqList {

	SqDataType* data;
	int sz;
	int capacity;

}SqList;

void SqListInit(SqList* list);
void SqListDestroy(SqDataType* list);
void CheckCapacity(SqList* list);

void SqListPushBack(SqList* list, SqDataType val);
void SqListPushFront(SqList* list, SqDataType val);

void SqListPopBack(SqList* list, SqDataType* val);
void SqListPopFront(SqList* list, SqDataType* val);

void SqListInsert(SqList* list,size_t pos, SqDataType val);
void SqListErase(SqList* list, size_t pos, SqDataType* val);
void SqListPrint(SqList* list);
