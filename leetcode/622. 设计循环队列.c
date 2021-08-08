//循环队列可以使用链表或数组实现
//这里采用数组实现
//思路：
//假设给定队列大小为k 
//队列实际大小开辟k+1 
//当 front(队头指针) 等于 rear(队尾指针) 时，队列为空
//当 (rear+1) % (k+1) == front 时 队列为满



typedef struct {

    int* que;
    int front;
    int rear;    
    int k;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {

    MyCircularQueue* myQue = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    assert(myQue);
    myQue->que = (int*)malloc(sizeof(int) * (k + 1));
    assert(myQue->que);
    myQue->front = 0;
    myQue->rear = 0;
    myQue->k = k;
    
    return myQue;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {

    assert(obj);
    return obj->rear == obj->front;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    assert(obj);
    return (obj->rear + 1) % (obj->k + 1) == obj->front;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {

    assert(obj);
    if(myCircularQueueIsFull(obj))
        return false;

    obj->que[obj->rear] = value;
    obj->rear++;
    
    obj->rear %= (obj->k + 1);
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {

    assert(obj);
    if(myCircularQueueIsEmpty(obj))
        return false;

    obj->front++;
    obj->front %= (obj->k + 1);
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {

     assert(obj);
     if(myCircularQueueIsEmpty(obj))
        return -1;
     return obj->que[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    assert(obj);
    if(myCircularQueueIsEmpty(obj))
        return -1;

    int prev = obj->rear - 1;
    if(prev == -1)
        prev = obj->k; 

    return obj->que[prev];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    
    assert(obj);

    free(obj->que);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/
