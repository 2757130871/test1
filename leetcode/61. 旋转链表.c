/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

//˼·��
//���ǿ��Է��֣�������ÿ���ڵ������ƶ�һ�����ǽ���ǰ�����ĩβ�ڵ���Ϊͷ��㡣
//ĩβ�ڵ����һ���ڵ�����Ϊĩβ�ڵ㣬�ٶϿ�����ĩβ�ڵ�Ĺ�ϵ��
//��ĿҪ���ƶ�k�Σ�����ֻҪ���ƶ� k%������ĳ��ȴΡ� ����ʡȥ��Ч�ƶ���
struct ListNode* rotateRight(struct ListNode* head, int k) {

    if (head == NULL)    return NULL;

    Node* tmp = head;
    int len = 0;
    while (tmp)
    {
        tmp = tmp->next;
        len++;
    }

    if (len == 1) return head;
    k %= len;

    while (k--)
    {
        Node* tail = head;
        Node* prev = NULL;

        while (tail->next)
        {
            prev = tail;
            tail = tail->next;
        }
        tail->next = head;
        prev->next = NULL;
        head = tail;
    }

    return head;
}