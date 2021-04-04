#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;


struct ListNode* removeElements(struct ListNode* head, int val) {

    Node* prev = NULL;
    Node* cur = head;

    while (cur) //遍历链表
    {
        if (cur->val == val)//
        {
            if (cur == head)//如果链表头==val ，头删
            {
                head = head->next;
                free(cur);
                cur = head;
            }
            else //删除节点
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }

        }
        else //不等于val就继续遍历。
        {
            prev = cur;
            cur = cur->next;
        }
    }

    return head;
}


int main()
{

	return;
}