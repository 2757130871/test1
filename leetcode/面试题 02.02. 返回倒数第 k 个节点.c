/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 1 -> 2 -> 5 -> 10
//假定求倒数第k个节点的值，k=2,
//定义两个指针，dest和cur,让cur先走k步，
//再让两个指针一起走，当cur为NULL的时候，dest此时就指向倒数第k个节点。
typedef struct ListNode Node;

int kthToLast(struct ListNode* head, int k) {

    if (head == NULL)
        return NULL;

    Node* cur = head;
    Node* dest = head;

    while (k--)
    {
        cur = cur->next;
    }

    while (cur)
    {
        cur = cur->next;
        dest = dest->next;
    }

    return dest->val;
}