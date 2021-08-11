#include "CQueue.h"

void test1()
{
	CQueue que;
	//初始化
	CQueueInit(&que,4);

	//入队
	CQueuePush(&que, 1);
	CQueuePush(&que, 2);
	

	CQueuePop(&que);
	CQueuePop(&que);
	CQueuePop(&que);
	CQueuePop(&que);

	CQueuePush(&que, 1);
	CQueuePush(&que, 2);
	CQueuePush(&que, 3);
	CQueuePush(&que, 4);

	CQueuePop(&que);
	CQueuePop(&que);
	CQueuePop(&que);

	CQueuePush(&que, 1);
	CQueuePush(&que, 2);
	CQueuePush(&que, 3);
	CQueuePush(&que, 4);

	CQueuePop(&que);
	CQueuePop(&que);
	CQueuePop(&que);

	CQueuePush(&que, 1);
	CQueuePush(&que, 2);
	CQueuePush(&que, 3);
	CQueuePush(&que, 4);


	while (!IsEmpty(&que))
	{
		printf("%d ", CQueueFront(&que));
		CQueuePop(&que);
	}

	//销毁
	CQueueDestroy(&que);

}


int main()
{


 	test1();

	return 0;
}
