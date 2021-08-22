#include "SCircularList.h"


//接口
void SListInit(Node* list)
{
	assert(list);

	list->next = list;
	list->val = -1;

}

void SListDestroy(Node* list)
{
	assert(list);
	if (IsEmpty(list))
		return;

	Node* cur = list->next;

	while (cur != list)
	{
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
}


Node* BuyNode(DataType val)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode)
	{
		printf("malloc fail");
		exit(-1);
		return;
	}

	newNode->val = val;
	newNode->next = NULL;
	return newNode;
}

//尾插
void SListPushBack(Node* list, DataType val)
{
	assert(list);

	//当链表为空时，直接调用头插接口
	if (IsEmpty(list))
	{
		SListPushFront(list, val);
		return;
	}
	else
	{
		Node* tail = list->next;

		while (tail->next != list)
		{
			tail = tail->next;
		}

		Node* newNode = BuyNode(val);
		tail->next = newNode;
		newNode->next = list;
	}

}

//头删
void SListPushFront(Node* list, DataType val)
{
	assert(list);

	Node* next = list->next;

	Node* newNode = BuyNode(val);
	list->next = newNode;
	newNode->next = next;
}

//尾删
DataType SListPopBack(Node* list)
{
	assert(list);

	if (IsEmpty(list))
		return;

	Node* tail = list->next->next;
	Node* prev = list->next;
	DataType ret;
	if (tail == list)
	{
		ret = tail->val;
		free(tail);
		list->next = list;

	}
	else
	{
		while (tail->next != list)
		{
			prev = tail;
			tail = tail->next;
		}

		ret = tail->val;
		free(tail);
		prev->next = list;
		
	}

	return ret;
}

//头删
DataType SListPopFront(Node* list)
{
	if (IsEmpty(list))
		return;

	Node* next = list->next->next;
	DataType ret = list->next->val;
	free(list->next);
	list->next = next;

	return ret;
}

bool IsEmpty(Node* list)
{
	assert(list);
	return list == list->next;
}

void SListPrint(Node* list)
{
	assert(list);

	if (IsEmpty(list))
		return;

	Node* cur = list->next;

	while (cur != list)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

