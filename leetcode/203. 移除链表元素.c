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

    while (cur) //��������
    {
        if (cur->val == val)//
        {
            if (cur == head)//�������ͷ==val ��ͷɾ
            {
                head = head->next;
                free(cur);
                cur = head;
            }
            else //ɾ���ڵ�
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }

        }
        else //������val�ͼ���������
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