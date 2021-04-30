/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

//思路：
//我们可以发现，将链表每个节点向右移动一步就是将当前链表的末尾节点设为头结点。
//末尾节点的上一个节点设置为末尾节点，再断开它和末尾节点的关系。
//题目要求移动k次，我们只要将移动 k%上数组的长度次。 可以省去无效移动。
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