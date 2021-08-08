typedef int DataType;

typedef struct Node
{
	struct Node* next;
	DataType data;
}Node;

typedef struct Queue
{
	Node* phead;
	Node* ptail;
}Queue;


typedef struct Stack{

    Queue* q1;
    Queue* q2;

}MyStack;

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

void QueueInit(Queue* que)
{
    assert(que);
    que->phead = que->ptail = NULL;
}

//返回队列大小
int QueueSize(Queue* que)
{
    assert(que);
    int count = 0;
    Node* cur = que->phead;
    while(cur)
    {
        count++;
        cur = cur->next;
    }
    return count;
}

//判空
bool QueueIsEmpty(Queue* que)
{
	assert(que);
	return que->phead == NULL;
}

//获取队头元素
DataType QueueFront(Queue* que)
{	
    assert(que);
	return que->phead->data;
}

//获取队尾元素
DataType QueueTail(Queue* que)
{
	assert(que);
	return que->ptail->data;
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


/** Initialize your data structure here. */

MyStack* myStackCreate() {

    MyStack* stk = (MyStack*)malloc(sizeof(MyStack));
    
    stk->q1 = (Node*)malloc(sizeof(Node));
    stk->q1->phead = stk->q1->ptail = NULL;
    
    stk->q2 = (Node*)malloc(sizeof(Node));
     stk->q2->phead = stk->q2->ptail = NULL;
    
    return stk;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {

    assert(obj);
    if(!QueueIsEmpty(obj->q1))
    {
        QueuePush(obj->q1,x);
    }
    else if(!QueueIsEmpty(obj->q2))
    {
         QueuePush(obj->q2,x);
    }   
    else
    {
        QueuePush(obj->q1,x);
    }

}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {

    assert(obj);
    Queue* emptyQ = obj->q1;
    Queue* nonemptyQ = obj->q2;

    if(!QueueIsEmpty(emptyQ))
    {
        emptyQ = obj->q2;
        nonemptyQ = obj->q1;
    }
  
    while(QueueSize(nonemptyQ) > 1)
    {   
        QueuePush(emptyQ,QueueFront(nonemptyQ));
        QueuePop(nonemptyQ);
    }

    int ret = QueueFront(nonemptyQ);
    QueuePop(nonemptyQ);
    return ret;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    
    assert(obj);

    if(QueueIsEmpty(obj->q1))
        return QueueTail(obj->q2);

    return QueueTail(obj->q1);
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {

    assert(obj);
    return QueueIsEmpty(obj->q1) && QueueIsEmpty(obj->q2);
}

void myStackFree(MyStack* obj) {
    assert(obj);

    QueueDestroy(obj->q1);
    QueueDestroy(obj->q2);
    free(obj);
}

