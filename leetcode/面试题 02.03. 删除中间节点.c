/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;



//�������� A -> B -> C -> D
//Ҫɾ��B�ڵ㣬ֻҪ��C��ֵ������B��ɾ��C�������ɾ����B�ڵ㡣
void deleteNode(struct ListNode* node)
{

    Node* next = node->next;

    node->val = next->val;
    node->next = next->next;

    free(next);
}