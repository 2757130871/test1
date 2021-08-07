#include "stack.h"



//��ʼ��ջ
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

//����ջ
void DestroyStack(stack* stk)
{
	assert(stk);
	free(stk->s);
	stk->s = NULL;
	stk->capacity = 0;
	stk->top = -1;
}

//ѹջ
void StackPush(stack* stk, DataType val)
{
	assert(stk);

	if (stk->top == stk->capacity - 1)
	{
		//����
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
//��ջ
void StackPop(stack* stk, DataType* val)
{
	assert(stk);

	if (stk->top < 0)
	{
		printf("ջΪ��!\n");
		return;
	}

	*val = stk->s[stk->top];
	stk->top--;
}


//ջΪ�շ���true
bool StackIsEmpty(stack* stk)
{
	assert(stk);
	return stk->top == -1;
}

//��ջ�׿�ʼ��ӡԪ��
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




