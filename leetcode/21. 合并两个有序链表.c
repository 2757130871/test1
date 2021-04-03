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
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));//声明一个新链表存储排序后链表。

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

	while (l1) //当循环走完了时候，说明l1和l2有一个走完了，此时另一个链表没走完，就直接全部连上。
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