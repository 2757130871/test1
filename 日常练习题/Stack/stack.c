#include "stack.h"



//³õÊ¼»¯Õ»
void StackInit(stack* stk)
{
	assert(stk);
	stk->s = (stack*)malloc(4 * sizeof(DataType));
	if (!stk->s)
	{
		printf("malloc fail");
		return;
	}

	stk->top = -1;
	stk->capacity = 4;
}

//Ïú»ÙÕ»
void DestroyStack(stack* stk)
{
	assert(stk);
	free(stk->s);
	stk->s = NULL;
	stk->capacity = 0;
	stk->top = -1;
}

//Ñ¹Õ»
void StackPush(stack* stk, DataType val)
{
	assert(stk);

	if (stk->top == stk->capacity - 1)
	{
		//À©ÈÝ
		DataType* tmp = (DataType*)realloc(stk->s, sizeof(DataType) * stk->capacity * INCREMENT);
		if (!tmp)
		{
			printf("realloc fail");
			exit(-1);
		}
		stk->s = tmp;
		stk->capacity *= INCREMENT;
	}
	stk->top++;
	stk->s[stk->top] = val;
}
//µ¯Õ»
void StackPop(stack* stk, DataType* val)
{
	assert(stk);

	if (stk->top < 0)
	{
		printf("Õ»Îª¿Õ!\n");
		return;
	}

	*val = stk->s[stk->top];
	stk->top--;
}


//Õ»Îª¿Õ·µ»Øtrue
bool StackIsEmpty(stack* stk)
{
	assert(stk);
	return stk->top == -1;
}

//´ÓÕ»µ×¿ªÊ¼´òÓ¡ÔªËØ
void StackPrint(stack* stk)
{
	assert(stk);
	if (stk->top == -1)
	{
		printf("stack is null");
		return;
	}
	int i;
	for (i = 0; i <= stk->top; i++)
	{
		printf("%d ", stk->s[i]);
	}

}




