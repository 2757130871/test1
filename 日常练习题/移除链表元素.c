
typedef struct ListNode Node;

//注意点 1. 当head等于val时 


struct ListNode* removeElements(struct ListNode* head, int val){

    if(!head)   return NULL;
     
    while(head && head->val == val)
         head = head->next;
    
    if(!head)   return NULL;

    Node* cur = head;
    Node* prev = NULL;
    
    while(cur)
    {
        if(cur->val == val)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }

    return head;
}
