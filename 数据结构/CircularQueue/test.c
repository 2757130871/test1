#include "CQueue.h"

void test1()
{
	CQueue CQue;
	CQueueInit(&CQue, 4);

	CQueuePush(&CQue, 1);
	CQueuePush(&CQue, 2);
	CQueuePush(&CQue, 3);
	CQueuePush(&CQue, 4);
	CQueuePush(&CQue, 5);

	CQueuePop(&CQue); 
	CQueuePop(&CQue);
	CQueuePop(&CQue);

	CQueuePush(&CQue, 1);
	CQueuePush(&CQue, 2);

	CQueuePush(&CQue, 3);
	CQueuePush(&CQue, 4);
	
//CQueuePop(&CQue);

	while (!IsEmpty(&CQue))
	{
		printf("%d ", CQueueHead(&CQue));
		CQueuePop(&CQue);
	}

	CQueueDestroy(&CQue);

}

int main()
{
	test1();

	return 0;
}
