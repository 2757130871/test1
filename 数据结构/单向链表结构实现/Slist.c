#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "Slist.h"


//获得一个新节点。
struct Slist* BuyNewNode(Data data)
{
	struct Slist* newNode = (struct Slist*)malloc(sizeof(struct Slist));
	if (newNode == NULL)
	{
		printf("malloc失败");
		return -1;
	}

	newNode->data = data;
	newNode->next = NULL;
}

//打印
void SlistPrint(struct Slist* phead)
{
	if (phead == NULL)
	{
		return 0;
	}

	while (phead->next != NULL)
	{
		printf("%d ", phead->data);
		phead = phead->next;
	}
	printf("%d ", phead->data);
}


//尾插
void SListPushBack(struct Slist** pphead, Data data)
{
	if (*pphead == NULL)
	{
		*pphead = BuyNewNode(data);
	}
	else
	{
		struct Slist* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = BuyNewNode(data);
	}
}

//尾删
void SlistPopBack(struct Slist** pphead)
{
	//1.没有元素
	//2.只有一个元素
	//3.一个以上元素

	if (*pphead == NULL)
	{
		return 0;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		struct Slist* tail = *pphead;
		struct Slist* prev = tail;

		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		prev->next = NULL;
	}

}

//头插
void SlistPushFront(struct Slist** pphaed, Data data)
{
	struct Slist* newNode = (struct Slist*)malloc(sizeof(struct Slist));

	if (newNode == NULL)
	{
		return -1;
	}

	newNode->next = *pphaed;
	newNode->data = data;

	*pphaed = newNode;
}

//头删
void SlistPopFront(struct Slist** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		struct Slist* tmp = *pphead;

		*pphead = NULL;
		free(tmp);
	}
	else
	{
		struct Slist* next = (*pphead)->next;
		free(*pphead);

		*pphead = next;
	}

}

//查找
struct Slist* SlistSearch(struct Slist* pphead, Data data)
{
	if (pphead == NULL)
	{
		return NULL;
		//*pphead = BuyNewNode(1);
	}
	else
	{
		struct Slist* tmp = pphead;

		while (tmp->next != NULL)
		{
			if (tmp->data == data)
			{
				return tmp;
			}
			tmp = tmp->next;
		}



	}

	return NULL;
}