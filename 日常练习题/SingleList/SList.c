#include "SList.h"

//	初始化
void SListInit(SList* list)
{
	assert(list);

	list->head = NULL;
	list->sz = 0;
}

//	返回一个新节点
Node* GetNewNode()
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	assert(newNode);
	return newNode;
}

//	头插
void SListPushFront(SList* list, SLDataType val)
{
	assert(list);

	Node* newNode = GetNewNode();
	newNode->next = list->head;
	newNode->val = val;
	list->head = newNode;
}

//	尾插
void SListPushBack(SList* list, SLDataType val)
{
	Node* newNode = GetNewNode();
	newNode->next = NULL;
	newNode->val = val;

	//1 当链表为空
	if (list->head == NULL)
	{
		list->head = newNode;
		return;
	}

	//2 链表不位空
	Node* tmp = list->head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = newNode;
}


//	头删
void SListPopFront(SList* list, SLDataType* val)
{
	assert(list);

	//1.链表为空
	if (list->head == NULL)
		return;
	//2.不为空
	Node* next = list->head->next;
	*val = list->head->val;
	free(list->head);
	list->head = next;
}


//	尾删
void SListPopBack(SList* list, SLDataType* val)
{
	assert(list);

	//1.链表为空
	if (list->head == NULL)
		return;

	//2.链表只有一个结点
	if (list->head->next == NULL)
	{
		*val = list->head->val;
		free(list->head);
		list->head = NULL;
		return;
	}
	//3.多个结点
	Node* prev = NULL;
	Node* cur = list->head;

	while (cur->next != NULL)
	{
		prev = cur;
		cur = cur->next;
	}

	free(cur);
	prev->next = NULL;
}

//	查找
Node* SListFind(SList* list, SLDataType val)
{
	assert(list);

	Node* cur = list->head;
	while (cur)
	{
		if (cur->val == val)
			return cur;
		cur = cur->next;
	}

	return NULL;
}



void SListEraseAfter(SList* list, Node* pos)
{
	assert(list && pos);
	Node* cur = list->head;
	while (cur->next)
	{
		if (cur == pos)
		{
			Node* del = cur->next;
			cur->next = del->next;
			free(del);
			break;
		}
		else
		{
			cur = cur->next;
		}
	}

}



void SListDestroy(Node* head)
{
	assert(head);

	while (head)
	{
		Node* tmp = head;
		head = head->next;
		free(tmp);
	}

}



void SListPrint(Node* head)
{
	if (!head)
	{
		printf("NULL");
		return;
	}

	while (head)
	{
		printf("%d ->", head->val);
		head = head->next;
	}
	printf("NULL\n");
}

