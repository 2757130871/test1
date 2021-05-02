#define _CRT_SECURE_NO_WARNINGS 1

#include "SqStack.h"


//Init
Status InitSqStack(SqStack* S)
{
	int i = 0;
	for (i = 0;i < MAXSIZE;i++)
	{
		S->data[i] = 0;
	}

	S->top = -1;

	return OK;
}

//Print
Status PrintSqStack(SqStack* S)
{
	if (S->top == -1)
	{
		printf("栈为kong");
		return ERROR;
	}

	printf("从栈底开始打印\n");
	int i;
	for (i = 0;i <= S->top;i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	return OK;
}


//Push
Status PushSqStack(SqStack* S, int data)
{
	if (S->top == MAXSIZE - 1)
	{
		printf("Stack is full\n");
		return ERROR;
	}

	S->data[++S->top] = data;

	return OK;
}

//Pop
Status PopSqStack(SqStack* S)
{
	if (S->top == -1)
	{
		printf("Stack is null\n");
		return ERROR;
	}

	S->data[S->top--] = 0;
	return OK;
}