#include "SList.h"



void SListInit(SList* list)
{
	assert(list);

	list->head = NULL;
	list->sz = 0;
}

Node* GetNewNode()
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	assert(newNode);
	return newNode;
}

void SListPushFront(SList* list, SLDataType val)
{
	assert(list);

	Node* newNode = GetNewNode();
	newNode->next = list->head;
	newNode->val = val;
	list->head = newNode;
}

void SListPushBack(SList* list, SLDataType val)
{
	assert(list);

	Node* newNode  = GetNewNode();
	newNode->next = NULL;
	newNode->val = val;

	Node* tmp = list->head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = newNode;
}


void SListPrint(Node* node)
{
	assert(node);

	while (node)
	{
		printf("%d ->", node->val);
		node = node->next;
	}
	printf("NULL");
}
