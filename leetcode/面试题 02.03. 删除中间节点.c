/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;



//给定链表 A -> B -> C -> D
//要删除B节点，只要把C的值拷贝给B再删除C就相等于删除了B节点。
void deleteNode(struct ListNode* node)
{

    Node* next = node->next;

    node->val = next->val;
    node->next = next->next;

    free(next);
}