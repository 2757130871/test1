#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef int DataType;

//单向循环带头链表
typedef struct ListNode
{
	struct ListNode* next;
	DataType val;
}Node;



//接口
void SListInit(Node* list);
void SListDestroy(Node* list);
Node* BuyNode(DataType val);

void SListPushBack(Node* list, DataType val);
void SListPushFront(Node* list, DataType val);

DataType SListPopBack(Node* list);
DataType SListPopFront(Node* list);

bool IsEmpty(Node* list);

void SListPrint(Node* list);

