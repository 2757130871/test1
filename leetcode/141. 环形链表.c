#include <stdio.h>

bool hasCycle(struct ListNode* head) {

	if (head == NULL || head->next == NULL)
		return false;

	//�������˫ָ�롣
	struct ListNode* slow = head;
	struct ListNode* fast = head;

	//�����������ָ��һ����������
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		
		//��������true��
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