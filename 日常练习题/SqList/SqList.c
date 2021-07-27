#include "SqList.h"


void SqListInit(SqList* list)
{
	assert(list);

	list->capasity = 4;
	list->data = (SqList*)malloc(list->capasity * sizeof(SqDataType));
	list->sz = 0;

}

void SqListDestroy(SqList* list)
{
	assert(list);
	
	free(list);
	list = NULL;
}


void SqlistPushBack(SqList* list, SqDataType val)
{
	assert(list);

	if (list->sz == list->capasity)
	{
		//增容

	}

}

void SqlistPushFront(SqList* list, SqDataType val)
{


}