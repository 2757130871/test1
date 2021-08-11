#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef int DataType;

typedef struct Node
{
	struct Node* prev;
	struct Node* next;
	DataType val;

}Node;

void DListInit(Node** list);
void DListDestroy(Node* list);

Node* BuyNode(DataType val);

void DListPushBack(Node* list, DataType val);
void DListPushFront(Node* list, DataType val);


void DListPopBack(Node* list, DataType* val);
void DListPopFront(Node* list, DataType* val);

bool IsEmpty(Node* list);

void DListPrint(Node* list);

void BackPrint(Node* list);


