#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

//˼·��
//������ͷ���ָ�������ٶ���Ϊ��������
//��ʣ������ڵ����������ͷ��㡣�γ���������
struct ListNode* insertionSortList(struct ListNode* head) {

    if (head == NULL || head->next == NULL)
        return head;

    Node* sorthead = head;

    Node* newhead = sorthead->next;

    sorthead->next = NULL;



    while (newhead)
    {
        Node* next = newhead->next;

        if (newhead->val < sorthead->val)
        {
            newhead->next = sorthead;
            sorthead = newhead;
        }
        else
        {
            Node* sortprev = sorthead;
            Node* sortcur = sorthead->next;

            while (sortcur)
            {
                if (newhead->val <= sortcur->val)
                {
                    newhead->next = sortcur;
                    sortprev->next = newhead;
                    break;
                }
                else
                {
                    sortprev = sortcur;
                    sortcur = sortcur->next;
                }

            }

            if (sortcur == NULL)
            {
                sortprev->next = newhead;
                newhead->next = NULL;
            }
        }

        newhead = next;
    }

    return sorthead;
}



int main()
{

	return;
}