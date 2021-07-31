
typedef struct ListNode Node;

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {

    if(pListHead == NULL)    return NULL;
    //定义先后指针
    Node* ret = pListHead;
    Node* cur = pListHead;
    
    //让先指针先走k-1步
    while(cur && --k)
        cur = cur->next;
    
    //循环结束，cur为空，为无效位置，直接返回
    if(!cur)    return NULL;
    //先后指针一起走，当cur指向最后一个节点时，ret指向倒数第k个节点
    while(cur->next && ret->next)
    {
        ret  = ret->next;
        cur = cur->next;
    }
    
    return ret;
}
