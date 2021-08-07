#include "queue.h"

void test1()
{
	Queue que;

	//��ʼ��
	QueueInit(&que);
	
	//���
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

	//ʹ���������
 	QueueDestroy(&que);
}

int main()
{
	test1();

	return 0;
}