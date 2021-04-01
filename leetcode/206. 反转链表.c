#include <stdio.h>

//解法1：迭代，双指针法


struct ListNode* reverseList(struct ListNode* head)
{
	struct ListNode* cur = head;
	struct ListNode* pre = NULL;
	while (cur) {
		struct ListNode* tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}
	return pre;
}

int main()
{

	return;
}