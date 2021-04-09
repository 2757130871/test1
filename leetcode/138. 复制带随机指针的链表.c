#include <stdio.h>

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

typedef struct Node Node;

struct Node* copyRandomList(struct Node* head) {

    if (head == NULL)
        return NULL;

    Node* cur = head;

    //1.��������ÿ��������һ���½ڵ㡣
    while (cur)
    {
        Node* copy = (Node*)malloc(sizeof(Node));
        copy->val = cur->val;
        copy->next = cur->next;
        cur->next = copy;

        cur = copy->next;
    }


    cur = head;

    //2.ÿ���½ڵ��ramdonָ��cur�ڵ��randon����һ���ڵ㡣
    while (cur)
    {
        if (cur->random)
            cur->next->random = cur->random->next;
        else
            cur->next->random = NULL;

        cur = cur->next->next;
    }


    //3.�ָ�����
    cur = head; 
    //�����������ͷ���
    Node* copyhead = head->next;

    while (cur)
    {
        Node* next = cur->next->next;

        if (cur->next->next)
            cur->next->next = next->next;
        else
            cur->next->next = NULL;

        cur = next;
    }

    //���ظ��Ƶ�����
    return copyhead;
}

int main()
{

	return;
}