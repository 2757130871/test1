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

void SListPrint(SList* list);
