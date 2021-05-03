#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkStack.h"

//Create LinkStack
struct LinkStack* CreateLinkStack()
{
	struct LinkStack* L1 = (struct LinkStack*)malloc(sizeof(struct LinkStack));

	return L1;
}


//Init LinkStack
void InitLinkStack(struct LinkStack* L)
{
	L->count = 0;
	L->top = NULL;
}

//Print LinkStack
void PrintLinkStack(struct LinkStack* L)
{
	if (L == NULL) return;

	if (L->top == NULL)
	{
		printf("LinkStack is null");
	}

	printf("从栈顶向下打印 ");

	struct StackNode* tmp = L->top;

	while (L->top)
	{
		printf("%d ", L->top->data);

		L->top = L->top->next;
	}

	L->top = tmp;

	return;
}

//Push 
void PushLinkStack(struct LinkStack* L, int e)
{
	struct StackNode* newTop = (struct StackNode*)malloc(sizeof(struct StackNode));
	newTop->data = e;

	newTop->next = L->top;
	L->top = newTop;
	L->count++;

	return;
}

//Pop
void PopLinkStack(struct LinkStack* L, int* e)
{
	if (L == NULL)
	{
		printf("L is null");
		return;
	}
	else if (L->top == NULL)
	{
		printf("LinkStack is null");
		return;
	}

	*e = L->top->data;
	struct StackNode* tmp = L->top;

	L->top = L->top->next;
	free(tmp);
	L->count--;

	return;
}

