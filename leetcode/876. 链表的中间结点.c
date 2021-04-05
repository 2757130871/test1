#include <stdio.h>


/**
 * Definition for 43-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head) {

	//�������˫ָ�롣
	struct ListNode* slow = head;
	struct ListNode* fast = head;

	//�����������������Ϊ�������һ��Ԫ�ز�ΪNULL�������������Ԫ�ص�next��ΪNULL��
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	//��������slowָ����λ����
	return slow;


}

int main()
{

	return;
}