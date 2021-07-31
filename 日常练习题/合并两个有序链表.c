
typedef struct ListNode Node;

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    if(l1 == NULL && l2 == NULL) return NULL;
    //当l1和l2其中有一个为NULL且l1和l2至少有一个不为NULL时，直接返回对方。
    if(l1 == NULL)   
      return l2;
     if(l2 == NULL)    
      return l1;
       

    Node* sentry = (Node*)malloc(sizeof(Node)); 
    Node* tmp = sentry;

    while(l1 && l2)
    {
        if(l1->val < l2->val)
        {
            sentry->next = l1;
            sentry = l1;
            l1 = l1->next;
        }
        else
        {
            sentry->next = l2;
            sentry = l2;
            l2 = l2->next;
        }
    }
  
  //当循环结束，至少有一个链表拷贝完成，另外一个链表剩下得节点均大于前节点，直接拷贝。

    while(l1)
    {
        sentry->next = l1;
        sentry = l1;
        l1 = l1->next;
    }

    while(l2)
    {
        sentry->next = l2;
        sentry = l2;
        l2 = l2->next;
    }

    Node* ret = tmp->next;
    free(tmp);
    return ret;
}
