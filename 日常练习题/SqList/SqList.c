#include "SqList.h"

//	初始化
void SqListInit(SqList* list)
{
	assert(list);

	list->capacity = 4;
	list->data = (SqDataType*)malloc(list->capacity * sizeof(SqDataType));
	list->sz = 0;
}

//	销毁顺序表
void SqListDestroy(SqDataType* ptr)
{
	assert(ptr);

	free(ptr);
	ptr = NULL;
}

void CheckCapacity(SqList* list)
{
	assert(list);

	if (list->sz == list->capacity)
	{
		//增容
		SqDataType* newList =
			(SqDataType*)realloc(list->data, (list->capacity + INCREMENT) * sizeof(SqDataType));

		if (newList)
			list->data = newList;

		list->capacity += INCREMENT;
	}
}

//	尾插
void SqListPushBack(SqList* list, SqDataType val)
{
	assert(list);

	CheckCapacity(list);

	list->data[list->sz] = val;
	list->sz++;
}

//	头插
void SqListPushFront(SqList* list, SqDataType val)
{
	assert(list);

	CheckCapacity(list);

	int i;
	for (i = list->sz - 1; i >= 0; i--)
	{
		list->data[i + 1] = list->data[i];
	}


	list->data[0] = val;
	list->sz++;
}

//	尾删
void SqListPopBack(SqList* list, SqDataType* val)
{
	assert(list);
	assert(list->sz > 0);
	*val = list->data[list->sz - 1];
	list->sz--;
}


//	头删

void SqListPopFront(SqList* list, SqDataType* val)
{
	assert(list);
	assert(list->sz > 0);

	*val = list->data[0];

	int n = 0;
	while (n < list->sz - 1)
	{
		list->data[n] = list->data[n + 1];
		n++;
	}

	list->sz--;
}


//	插入
void SqListInsert(SqList* list, size_t pos, SqDataType val)
{
	assert(list);
	assert((int)pos >= 0 && (int)pos <= list->sz);

	CheckCapacity(list);


	int i = list->sz - 1;
	while (i >= ((int)pos))
	{
		list->data[i + 1] = list->data[i];
		--i;
	}

	list->data[pos] = val;
	list->sz++;
}


//	删除
void SqListErase(SqList* list, size_t pos, SqDataType* val)
{
	assert(list);
	assert(list->sz != 0);
	assert(((int)pos) >= 0 && ((int)pos) < list->sz);


	*val = list->data[pos];
	if (list->sz == 1)
	{
		list->sz--;
		return;
	}

	int i = pos;
	while (i < (list->sz - 1))
	{
		list->data[i] = list->data[i + 1];
		i++;
	}

	list->sz--;
}




//	打印
void SqListPrint(SqList* list)
{
	int i;
	for (i = 0; i < list->sz; i++)
	{
		printf("%d\n", list->data[i]);
	}
}
