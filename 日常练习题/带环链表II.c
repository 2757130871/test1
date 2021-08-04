/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node; 


//结论；当链表带环时，当快慢快慢指针相遇点（设为meet）和头结点同时向后走，当他两相等时，此节点为入环点。
//设头结点到入环点的距离为L 环的长度为C  入环点到meet点的距离为X
//可以推出： 
//  2*(L+X) = L+X+NC  (N为慢指针为入环时，快指针已经在走过的环数)
//  L+X = NC
//  L = NC-X
//  L = (N-1)C+C-X
//  L = C-X 

struct ListNode *detectCycle(struct ListNode *head) {
    
    if(!head)   return NULL;

    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)    
            break;
    }

    if(fast == NULL || fast->next == NULL)  return NULL;

    while(head && slow)
    {
        if(head == slow)
            return head;
        head = head->next;
        slow = slow->next;
    }

    return NULL;
}
