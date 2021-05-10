92. ��ת���� II
���㵥�����ͷָ�� head ���������� left �� right ��
���� left <= right �����㷴ת��λ�� left ��λ�� right ������ڵ㣬���� ��ת������� ��


typedef struct ListNode Node;

Node* reverse(Node* head, int right)
{
	Node* n1 = NULL, * n2 = head, * n3 = head->next;

	while (n2->val != right)
	{
		n2->next = n1;

		n1 = n2;
		n2 = n3;
		if (n3)
			n3 = n3->next;
	}
	n2->next = n1;

	return n2;
}

//f
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {

	if (!head || !(head->next))   return head;

	Node* prev = head;
	Node* cur = head->next;

	while (cur)
	{
		if (cur->val == left)
		{
			Node* rnode = cur;
			while (rnode->val != right)
			{
				rnode = rnode->next;
			}
			rnode = rnode->next;

			prev->next = reverse(cur, right);
			cur->next = rnode;
			return head;
		}
		prev = cur;
		cur = cur->next;
	}

	return head;
}