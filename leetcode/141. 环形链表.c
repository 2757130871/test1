#include <stdio.h>

bool hasCycle(struct ListNode* head) {

	if (head == NULL || head->next == NULL)
		return false;

	//定义快慢双指针。
	struct ListNode* slow = head;
	struct ListNode* fast = head;

	//如果带环快慢指针一定会相遇。
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		
		//相遇返回true。
		if (slow == fast)
		{
			return true;
		}
	}

	return false;
}

int main()
{

	return;
}