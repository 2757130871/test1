#include "list.h"


//初始化
void ListInit(Node** phead)
{
	(*phead) = BuyNode();
	(*phead)->prev = *phead;
	(*phead)->rear = *phead;
	(*phead)->val = -1;

}

//销毁链表
void DestroyList(Node* phead)
{
	assert(phead);

	if (phead->prev == phead)
		return;


	Node* cur = phead->rear;

	while (cur != phead)
	{
		Node* next = cur->rear;
		free(cur);

		cur = next;
	}

	phead->prev = phead;
	phead->rear = phead;
}

//返回一个新节点
Node* BuyNode()
{
	Node* node = (Node*)malloc(sizeof(Node));
	if (!node)
	{
		printf("malloc fail");
		exit(-1);
	}
	return node;
}

//尾插
void ListPushBack(Node* phead, ListDataType val)
{
	assert(phead);

	Node* tail = phead->prev;
	Node* newNode = BuyNode();
	newNode->val = val;
	tail->rear = newNode;
	newNode->prev = tail;
	newNode->rear = phead;
	phead->prev = newNode;
}

//头插
void ListPushFront(Node* phead, ListDataType val)
{
	assert(phead);

	if (phead->rear == phead)
	{
		//等于尾插
		ListPushBack(phead, val);
		return;
	}
	Node* newNode = BuyNode();
	newNode->val = val;

	Node* next = phead->rear;
	phead->rear = newNode;
	newNode->rear = next;
	newNode->prev = phead;
	next->prev = newNode;
}

//尾删
void ListPopBack(Node* phead)
{
	assert(phead);

	if (phead->prev == phead)
		return;

	Node* tail = phead->prev;
	Node* prev = tail->prev;

	prev->rear = phead;
	phead->prev = prev;

	free(tail);
}

//头删
void ListPopFront(Node* phead)
{
	assert(phead);

	if (phead->prev == phead)
		return;

	Node* head = phead->rear;
	Node* next = head->rear;

	phead->rear = next;
	next->prev = phead;

}

//打印链表元素
void ListPrint(Node* phead)
{
	assert(phead);

	if (phead->rear == phead)
	{
		printf("list is null");
		return;
	}
	Node* cur = phead->rear;
	while (cur != phead)
	{
		printf("%d", cur->val);
		printf("->");

		cur = cur->rear;
	}

}


//返回查找节点
void ListSearch(Node* phead, ListDataType val)
{




}


//返回搜索节点
Node* ListFind(Node* phead, ListDataType val)
{
	assert(phead);

	if (phead->prev == phead)
		return NULL;
	Node* cur = phead->rear;
	while (cur != phead)
	{
		if (cur->val == val)
			return cur;

		cur = cur->rear;
	}
	return NULL;
}


//在指定结点前插入新节点
void ListInsert(Node* phead, Node* node, ListDataType val)
{
	assert(phead);

	if (phead->prev == phead)
		return;
	Node* cur = phead->rear;

	while (cur != phead)
	{
		if (cur == node)
		{
			Node* prev = cur->prev;
			Node* newNode = BuyNode();
			newNode->val = val;

			newNode->rear = cur;
			newNode->prev = prev;
			prev->rear = newNode;
			cur->prev = newNode;
			return;
		}
		cur = cur->rear;
	}
}


//删除指定节点
void ListErase(Node* phead, Node* node)
{
	assert(phead);

	if (phead->prev == phead)
		return;

	Node* cur = phead->rear;
	while (cur != phead)
	{
		if (cur == node)
		{
			Node* prev = cur->prev;
			Node* rear = cur->rear;

			prev->rear = rear;
			rear->prev = prev;
			free(cur);
			return;
		}
		cur = cur->rear;
	}

}