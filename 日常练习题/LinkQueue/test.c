#include "queue.h"

void test1()
{
	Queue que;

	//初始化
	QueueInit(&que);
	
	//入队
	QueuePush(&que, 1);
	QueuePush(&que, 2);
	QueuePush(&que, 3);
	QueuePush(&que, 4);
	QueuePush(&que, 5);

	while (!QueueIsEmpty(&que))
	{
		printf("%d ", QueueFront(&que));
		QueuePop(&que);
	}

	//使用完毕销毁
 	QueueDestroy(&que);
}

int main()
{
	test1();

	return 0;
}