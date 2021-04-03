#include <stdio.h>

int main()
{

	return;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{

	if (l1 == NULL && l2 == NULL)
	{
		return NULL;
	}
	/*
		if(l1==NULL)
			return l2;
		else
			return l1;

	*/
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));//����һ��������洢���������

	struct ListNode* tail = head;

	while (l1 != NULL && l2 != NULL) 
	{
		if (l1->val < l2->val)
		{
			tail->next = l1;
			tail = tail->next;
			l1 = l1->next;
		}
		else
		{
			tail->next = l2;
			tail = tail->next;
			l2 = l2->next;
		}

	}

	while (l1) //��ѭ��������ʱ��˵��l1��l2��һ�������ˣ���ʱ��һ������û���꣬��ֱ��ȫ�����ϡ�
	{
		tail->next = l1;
		tail = tail->next;
		l1 = l1->next;

	}

	while (l2)
	{
		tail->next = l2;
		tail = tail->next;
		l2 = l2->next;
	}

	return head->next;
}