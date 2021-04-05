#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //fast���ƶ�k��������fast��slowһ���ߣ���fastΪ�յ�ʱ��slow��ָ������k��Ԫ�ء�
struct ListNode* getKthFromEnd(struct ListNode* head, int k) {


	struct ListNode* slow = head;

	struct ListNode* fast = head;

	while (k--)
	{
		if (fast) //ע��k��������Ԫ�ظ�����
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