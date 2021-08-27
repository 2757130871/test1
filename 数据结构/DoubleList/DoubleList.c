#include "DoubleList.h"

void DListInit(Node* list)
{
	assert(list);
	list->data = -1;
	list->prev = list;
	list->rear = list;
}

void DListDestroy(Node* list)
{
	assert(list);
	if (IsEmpty(list))
		return;
	Node* cur = list->rear;
	while (cur != list)
	{
		Node* next = cur->rear;
		free(cur);
		cur = next;
	}
	list->rear = list;
	list->prev = list;
}

Node* BuyNode(DataType val)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newNode->data = val;
	newNode->prev = NULL;
	newNode->rear = NULL;
	return newNode;
}

void DListPushBack(Node* list, DataType val)
{
	assert(list);
	Node* tail = list->prev;
	
	Node* newNode = BuyNode(val);
	tail->rear = newNode;
	newNode->rear = list;
	newNode->prev = tail;
	list->prev = newNode;
}


void DListPushFront(Node* list, DataType val)
{
	assert(list);
	
	if (IsEmpty(list))
	{
		DListPushBack(list, val);
	}
	else
	{
		Node* head = list->rear;
		
		Node* newNode = BuyNode(val);
		list->rear = newNode;
		newNode->rear = head;
		head->prev = newNode;
		newNode->prev = list;
	}

}

DataType DListPopBack(Node* list)
{
	if (IsEmpty(list))
		return -1;

	DataType ret;
	Node* tail = list->prev;
	Node* prev = tail->prev;
	ret = tail->data;
	
	free(tail);
	prev->rear = list;
	list->prev = prev;

	return ret;
}


DataType DListPopFront(Node* list)
{
	assert(list);

	if (IsEmpty(list))
		return -1;

	DataType ret;
	Node* head = list->rear;
	Node* next = head->rear;
	ret = head->data;

	free(head);

	list->rear = next;
	next->prev = list;
	return ret;
}

bool IsEmpty(Node* list)
{
	assert(list);
	return list->prev == list;
}

void ListPrevPrint(Node* list)
{
	assert(list);

	if (IsEmpty(list))
	{
		printf("list is null\n");
		return;
	}

	Node* cur = list->rear;

	while (cur != list)
	{
		printf("%d ", cur->data);
		cur = cur->rear;
	}
	printf("\n");
}


void ListRearPrint(Node* list)
{
	assert(list);

	if (IsEmpty(list))
	{
		printf("list is null\n");
		return;
	}

	Node* cur = list->prev;

	while (cur != list)
	{
		printf("%d ", cur->data);
		cur = cur->prev;
	}
	printf("\n");
}
