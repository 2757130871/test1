#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int DataType;


typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* rear;
	DataType data;
}Node;

void DListInit(Node* list);
void DListDestroy(Node* list);
Node* BuyNode(DataType val);

void DListPushBack(Node* list, DataType val);
void DListPushFront(Node* list, DataType val);

//链表为空返回-1
DataType DListPopBack(Node* list);
DataType DListPopFront(Node* list);

bool IsEmpty(Node* list);


void ListPrevPrint(Node* list);
void ListRearPrint(Node* list);

