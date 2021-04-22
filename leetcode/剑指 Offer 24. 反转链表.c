/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

struct ListNode* reverseList(struct ListNode* head) {
	//head为NULL或者只有一个节点直接返回
	if (head == NULL || head->next == NULL)    return head;

	Node* n1 = NULL, * n2 = head, * n3 = head->next;

	while (n2)
	{
		n2->next = n1;//逆序

		n1 = n2;//移动
		n2 = n3;//移动
		if (n3) //注意当n3为NULL时，结束移动
			n3 = n3->next;
	}
	//循环结束n1为链表头
	return n1;
}