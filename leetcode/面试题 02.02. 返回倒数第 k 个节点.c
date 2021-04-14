/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 1 -> 2 -> 5 -> 10
//�ٶ�������k���ڵ��ֵ��k=2,
//��������ָ�룬dest��cur,��cur����k����
//��������ָ��һ���ߣ���curΪNULL��ʱ��dest��ʱ��ָ������k���ڵ㡣
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