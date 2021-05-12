//思路： 例如输入 1 2 3  输出： 1 2 3
//题目要求用两个栈实现队列，我们无法直接删除栈底部的元素
//可以再创建一个栈，然后将存储元素的栈中数据push入另一个栈，
//此时另一个栈的元素就是原栈数据的逆序，
//  stack1     stack2
//  | 3 |      | 1 |
//  | 2 |      | 2 |
//  | 1 |      | 3 |

//此时pop栈2的就模拟了队列出队

//栈
typedef struct {
    int data[10000];
    int top;
} CQueue;

//创建并初始化
CQueue* cQueueCreate() {
    CQueue* stk1 = (CQueue*)malloc(sizeof(CQueue));
    if(!stk1)   return NULL;       
                
    stk1->top = -1;
    return stk1;
}

void cQueueAppendTail(CQueue* obj, int value) {
    if(!obj)    return;
    //压栈
    obj->data[++obj->top] = value;
}

int cQueueDeleteHead(CQueue* obj) {
    if(!obj)    return -1;
    if(obj->top == -1)
        return -1;

    CQueue stk2;
    stk2.top = -1;
    
  
    int tmp = obj->top;

    while(tmp != -1)
    {
        stk2.data[++stk2.top] = obj->data[tmp--]; //将数据从stack1压入stack2
    }
    
    //每调用一次deleteHead需要更新stack1将已经出队的数据移除。
    int i;
    for(i = 0;i < obj->top;i++)
    {
        obj->data[i] = obj->data[i+1];
    }
    obj->top--; //记得更新top

    int ret = stk2.data[stk2.top];  //pop stack2元素就是出队操作
    
    return ret;
}

void cQueueFree(CQueue* obj) {
    free(obj);
}

