/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

//思路：定义两个指针，指向两个数组首元素，两个数组元素逐个比较。
//小的插入新链表。。。
//
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {

    if (l1 == NULL && l2 == NULL) return NULL;

    Node* newhead = (Node*)malloc(sizeof(Node));
    Node* newcur = newhead;

    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            newcur->next = l1;
            newcur = newcur->next;
            l1 = l1->next;
        }
        else
        {
            newcur->next = l2;
            newcur = newcur->next;
            l2 = l2->next;
        }

    }

    while (l1)
    {
        newcur->next = l1;

        newcur = newcur->next;
        l1 = l1->next;
    }

    while (l2)
    {
        newcur->next = l2;

        newcur = newcur->next;
        l2 = l2->next;
    }

    return newhead->next;
}