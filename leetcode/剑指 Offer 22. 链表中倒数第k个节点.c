#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //fast先移动k步。再让fast和slow一起走，当fast为空的时候，slow就指向倒数第k个元素。
struct ListNode* getKthFromEnd(struct ListNode* head, int k) {


	struct ListNode* slow = head;

	struct ListNode* fast = head;

	while (k--)
	{
		if (fast) //注意k大于链表元素个数。
			fast = fast->next;
		else
			return NULL;
	}

	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return slow;

}


int main()
{

	return;
}