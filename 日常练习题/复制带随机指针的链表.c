
 typedef struct Node Node;

// jjdd

struct Node* copyRandomList(struct Node* head) {

    if(head == NULL)
        return NULL;

    Node* cur = head;

    //1.链接两个链表。
    while(cur)
    {
        Node* copy = (Node*)malloc(sizeof(Node));
        copy->val = cur->val;
        copy->next = cur->next;
        cur->next =copy;

        cur = copy->next;
    }

    cur =head;

    while(cur)
    {
        if(cur->random)
            cur->next->random = cur->random->next;
        else
            cur->next->random = NULL;

        cur = cur->next->next;
    }
    

    //分割链表
    cur = head;
    Node* copyhead = head->next;

    while(cur)
    {
        Node* next=  cur->next->next;

        if(cur->next->next)
            cur->next->next =next->next; 
        else
            cur->next->next=NULL;

        cur = next;
    }

    return copyhead;
}
