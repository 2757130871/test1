/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 typedef struct ListNode Node;

//定义一个cur指针记录当前指针位置 
//需记录cur指针前一个节点和后一节点
//遍历结束，cur指针指向NULL，prev指针为头节点

struct ListNode* reverseList(struct ListNode* head){

    if(!head)   return NULL;
    if(head->next == NULL)    return head;

  
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
