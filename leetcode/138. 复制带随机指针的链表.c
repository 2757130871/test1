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

    //1.在新链表每个结点后复制一个新节点。
    while (cur)
    {
        Node* copy = (Node*)malloc(sizeof(Node));
        copy->val = cur->val;
        copy->next = cur->next;
        cur->next = copy;

        cur = copy->next;
    }


    cur = head;

    //2.每个新节点的ramdon指向cur节点的randon的下一个节点。
    while (cur)
    {
        if (cur->random)
            cur->next->random = cur->random->next;
        else
            cur->next->random = NULL;

        cur = cur->next->next;
    }


    //3.分割链表
    cur = head; 
    //保存新链表的头结点
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

    //返回复制的链表。
    return copyhead;
}

int main()
{

	return;
}