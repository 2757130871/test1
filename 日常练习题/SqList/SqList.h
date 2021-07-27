#pragma once
#include <stdio.h>
#include <assert.h>

typedef  int SqDataType;
#define INCREMENT 2


typedef struct SqList {

	SqDataType* data;
	int sz;
	int capasity;

}SqList;


void SqListInit(SqList* list);
void SqListDestroy(SqList* list);

void SqlistPushBack(SqList* list, SqDataType val);
void SqlistPushFront(SqList* list, SqDataType val);

void SqlistPopBack(SqList* list, SqDataType* val);
void SqlistPopFront(SqList* list, SqDataType* val);

void SqlistModify(SqList* list, SqDataType* val);
void SqlistModify(SqList* list, SqDataType* val);