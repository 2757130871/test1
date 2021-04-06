#include <stdio.h>


/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {

	//先逆置链表
	struct ListNode* reverse(struct ListNode* head) {

		if (head == NULL)
			return NULL;

		struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next;

		while (n2)
		{
			n2->next = n1;

			n1 = n2;
			n2 = n3;
			if (n3)
				n3 = n3->next;
		}

		return n1;
	}

public:
	bool chkPalindrome(ListNode* A) {

		//首先分割链表。
		struct  ListNode* fast = A;
		struct ListNode* slow = A;

		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		//逆置链表下半部分。
		slow = reverse(slow);

		//遍历比较每个节点。如果不相同返回false。
		while (slow && A)
		{
			if (slow->val != A->val)
				return false;

			slow = slow->next;
			A = A->next;
		}

		//相同返回true。
		return true;
	}
};

int main()
{

	return;
}