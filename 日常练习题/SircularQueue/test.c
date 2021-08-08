#include "queue.h"

void test1()
{
	
	//初始化
	CQueue* que = CQueueInit(4);
		
	//入队
	CQueuePush(que, 1);
	CQueuePush(que, 2);
	CQueuePush(que, 3);
	CQueuePush(que, 4);

	/*CQueuePop(que);
	CQueuePop(que);
	CQueuePop(que);
	CQueuePop(que);*/


	while (!CQueueIsEmpty(que))
	{
		printf("%d ", CQueueFront(que));
		CQueuePop(que);
	}

	CQueuePush(que, 5);


	//销毁
	CQueueDestroy(que);
	que = NULL;

}

int main()
{
	test1();


	return 0;
}
