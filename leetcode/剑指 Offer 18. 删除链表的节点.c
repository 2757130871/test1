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

    //��������һ���ڵ���Ǵ�ɾ�ڵ㡣ֱ�ӷ��ء�
    if (cur->val == val)
    {
        return head->next;
    }

    struct ListNode* prev = head;
    struct ListNode* next = prev->next;

    while (next)
    {
        //�ҵ���ɾ�ڵ㣬ɾ����
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