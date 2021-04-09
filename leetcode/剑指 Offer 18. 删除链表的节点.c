#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val) {

    struct ListNode* cur = head;

    //如果链表第一个节点就是待删节点。直接返回。
    if (cur->val == val)
    {
        return head->next;
    }

    struct ListNode* prev = head;
    struct ListNode* next = prev->next;

    while (next)
    {
        //找到待删节点，删除。
        if (next->val == val)
        {
            prev->next = next->next;
        }

        prev = next;
        next = next->next;
    }

    return head;
}


int main()
{

	return;
}