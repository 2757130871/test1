#pragma once

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef int  SLDataType;

typedef struct Node
{
	struct SListNode* next;
	SLDataType val;
}Node;


typedef struct  SList
{
	Node* head;
	int sz;

}SList;


void SListInit(SList* list);
Node* GetNewNode();
void SListPrint(Node* head);

//头插
void SListPushFront(SList* list, SLDataType val);
//尾删
void SListPushBack(SList* list, SLDataType val);
//头删
void SListPopFront(SList* list, SLDataType* val);
//尾删
void SListPopBack(SList* list, SLDataType* val);
//插入
void SListInsert(SList* list, SLDataType del);
//查找
Node* SListFind(SList* list, SLDataType val);

//删除指定结点后一个结点
void SListEraseAfter(SList* list, Node* pos);


//销毁链表
void SListDestroy(Node* head);

void test(SList* list);
