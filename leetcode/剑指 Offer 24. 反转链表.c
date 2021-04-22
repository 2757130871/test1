/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

struct ListNode* reverseList(struct ListNode* head) {
	//headΪNULL����ֻ��һ���ڵ�ֱ�ӷ���
	if (head == NULL || head->next == NULL)    return head;

	Node* n1 = NULL, * n2 = head, * n3 = head->next;

	while (n2)
	{
		n2->next = n1;//����

		n1 = n2;//�ƶ�
		n2 = n3;//�ƶ�
		if (n3) //ע�⵱n3ΪNULLʱ�������ƶ�
			n3 = n3->next;
	}
	//ѭ������n1Ϊ����ͷ
	return n1;
}