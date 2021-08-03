/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };2
 */

//  
typedef struct ListNode Node;
bool hasCycle(struct ListNode *head) {
    
    if(!head)   return false;

    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;

         if(slow == fast)
            return true;
    }

    return false;
}
