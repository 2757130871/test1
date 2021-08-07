#include "stack.h"


void test1()
{
	stack stk;

	//初始化
	StackInit(&stk);
	StackPush(&stk, 1);
	StackPush(&stk, 2);
	StackPush(&stk, 3);
	StackPush(&stk, 4);
	StackPush(&stk, 5);

	StackPrint(&stk);
	printf("\n");

	DataType n1, n2, n3, n4, n5;
	StackPop(&stk, &n1);
	StackPop(&stk, &n2);
	StackPop(&stk, &n3);
	StackPop(&stk, &n4);
	StackPop(&stk, &n5);



	StackPrint(&stk);
	printf("\n");


	//销毁栈
	DestroyStack(&stk);
}


int main()
{
	test1();

	return 0;
}