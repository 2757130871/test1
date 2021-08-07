#include "queue.h"



//初始化
void QueueInit(Queue* que)
{
	assert(que);
	que->phead = NULL;
	que->ptail = NULL;
}

//销毁
void QueueDestroy(Queue* que)
{
	assert(que);

	Node* cur = que->phead;
	while (cur)
	{
		Node* next = cur->next;
		free(cur);

		cur = next;
	}
	que->phead = que->ptail = NULL;
}


//入队
void QueuePush(Queue* que, DataType val)
{
	assert(que);

	Node* newNode = (Node*)malloc(sizeof(Node));

	if (!newNode)
		exit(-1);
	newNode->data = val;
	newNode->next = NULL;

	if (que->phead == NULL)
	{
		que->phead = que->ptail = newNode;
	}
	else
	{
		que->ptail->next = newNode;
		que->ptail = newNode;
	}

}

//出队
void QueuePop(Queue* que)
{
	assert(que);

	//当队列为空
	if (que->phead == NULL)
		return;

	if (que->phead == que->ptail)
	{
		//当队列只有一个元素
		free(que->phead);
		que->phead = que->ptail = NULL;
	}
	else
	{
		//当队列有多个元素
		Node* next = que->phead->next;
		free(que->phead);
		que->phead = next;
	}
}

//判空
bool QueueIsEmpty(Queue* que)
{
	assert(que);
	return que->phead == NULL;
}

//计算队列大小
int QueueSize(Queue* que)
{
	assert(que);

	int count = 0;
	Node* cur = que->phead;
	while (cur)
	{
		count++;
		cur = cur->next;
	}

	return count;
}



//获取队头元素
DataType QueueFront(Queue* que)
{
	assert(que);
	assert(!QueueIsEmpty(que));
	
	return que->phead->data;
}


//获取队尾元素
DataType QueueTail(Queue* que)
{
	assert(que);
	assert(!QueueIsEmpty(que));

	return que->ptail->data;
}