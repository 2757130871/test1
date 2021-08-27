#include "LinkedStack.h"


void test1()
{
	LStack stk;
	LStackInit(&stk);

	LStackPush(&stk, 1);
	LStackPush(&stk, 2);
	LStackPush(&stk, 3);
	LStackPush(&stk, 4);

	while (!IsEmpty(&stk))
	{
		printf("%d ", LStackTop(&stk));
		LStackPop(&stk);
	}

	LStackDestroy(&stk);
}


int main()
{
	test1();

	return 0;
}
