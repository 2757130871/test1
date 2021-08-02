/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef  struct ListNode Node;

Node* reverseList(Node* head)
{
    if(!head)  return NULL;
    if(head->next == NULL) return head;

    Node* cur = head;
    Node* prev = NULL;
    Node* next = cur->next;
    while(cur)
    {
        cur->next = prev;
        
        prev = cur;
        cur = next;
        if(next)
            next = next->next;
    } 

    return prev;
}

bool isPalindrome(struct ListNode* head){

    if(!head)   return NULL;

    Node* fast = head;
    Node* slow = head;

    //找到中间点
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    //反转slow为头结点的链表 
    Node* list =  reverseList(slow);
    printf(" %d\n",list->val);
    
    //逐个比较
    Node* cur = head;
    while(list)
    {
        if(list->val != cur->val)
                return false;

        cur = cur->next;
        list = list->next;
    }

    return true;
}
