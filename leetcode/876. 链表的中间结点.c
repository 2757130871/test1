#include <stdio.h>


/**
 * Definition for 43-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head) {

	//定义快慢双指针。
	struct ListNode* slow = head;
	struct ListNode* fast = head;

	//结束遍历链表的条件为链表最后一个元素不为NULL，并且数组最后元素的next不为NULL。
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	//遍历结束slow指向中位数，
	return slow;


}

int main()
{

	return;
}