/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

 typedef struct Node Node;

//思路；
//在原链表的每个节点后插入一个新节点,并复制源节点的值。
//建立他们的相对关系，每个copy节点的random都是指向前一个源节点的random的next节点，除了指向NULL.
//最后分离两个节点，需要注意各种空指针访问

//

struct Node* copyRandomList(struct Node* head) {
	
    if(!head)   return NULL;

    //插入新链表
    Node* cur = head;
    Node* next = head->next;

    while(cur)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        cur->next = newNode;
        newNode->val = cur->val;
        newNode->next = next;

        cur = next;
        if(next)
            next = next->next;
    }

    //复制roadom指针
    cur = head;
    while(cur)
    {
        Node* copy = cur->next;

        if(cur->random)
            copy->random = cur->random->next;
        else
            copy->random = NULL; 
        
        cur = copy->next;
    }

    //分割链表
    Node* newHead = head->next;
    cur = head;
    while(cur)
    {
        Node* copy = cur->next;

        cur->next = copy->next;
        if(copy->next)
            copy->next = copy->next->next;

        cur = cur->next;
    }

    return newHead;
}
