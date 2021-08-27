#include "LinkedStack.h"

void LStackInit(LStack* stk)
{
	assert(stk);

	stk->top = NULL;
	stk->count = 0;
}


void LStackDestroy(LStack* stk)
{
	assert(stk);

	if (IsEmpty(stk))
		return;

	while (stk->top)
	{
		SNode* next = stk->top->next;
		free(stk->top);
		stk->top = next;
	}

}


SNode* BuyNode(DataType val)
{
	SNode* newNode = (SNode*)malloc(sizeof(SNode));
	if (!newNode)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newNode->next = NULL;
	newNode->data = val;

	return newNode;
}

void LStackPush(LStack* stk,DataType val)
{
	assert(stk);
	SNode* newNode = BuyNode(val);
	newNode->next = stk->top;
	stk->top = newNode;
	stk->count++;
}
void LStackPop(LStack* stk)
{
	assert(stk);
	if (IsEmpty(stk))
		return;

	SNode* tmp = stk->top;
	stk->top = stk->top->next;
	free(tmp);
	stk->count--;
}

DataType LStackTop(LStack* stk)
{
	assert(stk);
	if (IsEmpty(stk))
		return -1;

	return stk->top->data;
}

bool IsEmpty(LStack* stk)
{
	assert(stk);
	return stk->top == NULL;
}
