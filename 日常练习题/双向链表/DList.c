#include "DList.h"


void DListInit(Node** list)
{
	assert(list);
	*list = (Node*)malloc(sizeof(Node));
	if (*list == NULL)
	{
		printf("malloc fail");
		return;
	}

	(*list)->next = *list;
	(*list)->prev = *list;
	(*list)->val = -1;
}

void DListDestroy(Node* list)
{
	assert(list);
	
	Node* cur = list->next;
	while (cur != list)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
	free(list);
}

Node* BuyNode(DataType val)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode)
	{
		printf("malloc fail\n");
		return;
	}
	newNode->val = val;
	return newNode;
}


void DListPushBack(Node* list, DataType val)
{
	assert(list);
	
	Node* tail = list->prev;
	Node* newNode = BuyNode(val);

	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = list;
	list->prev = newNode;

}
void DListPushFront(Node* list, DataType val)
{
	assert(list);

	Node* next = list->next;
	
	Node* newNode = BuyNode(val);
	if (!newNode)
	{
		printf("malloc fail\n");
		return;
	}
	list->next = newNode;
	newNode->prev = list;
	newNode->next = next;
	next->prev = newNode;

}


void DListPopBack(Node* list, DataType* val)
{
	assert(list);
	if (IsEmpty(list))
		return;

	Node* tail = list->prev;
	Node* prev = tail->prev;
	*val = tail->val;
	free(tail);
	prev->next = list;
	list->prev = prev;

}
void DListPopFront(Node* list, DataType* val)
{
	assert(list);
	if (IsEmpty(list))
		return;

	Node* head = list->next;
	Node* next = head->next;
	*val = head->val;
	free(head);
	list->next = next;
	next->prev = list;
}


bool IsEmpty(Node* list)
{
	assert(list);
	return list->next == list;
}

void DListPrint(Node* list)
{
	assert(list);

	if (list->next == list)
	{
		printf("list is null");
		return;
	}

	Node* cur = list->next;
	while (cur != list)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}


void BackPrint(Node* list)
{
	assert(list);

	if (list->next == list)
	{
		printf("list is null");
		return;
	}
	Node* cur = list->prev;
	while (cur != list)
	{
		printf("%d ", cur->val);
		cur = cur->prev;
	}
	printf("\n");

}
