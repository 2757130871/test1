#include <stdio.h>

//解法1：双指针迭代
struct ListNode* reverseList(struct ListNode* head) {

	if (head == NULL || head->next == NULL) //如果只有链表为NULL或者链表只有一个元素就直接返回。
	{
		return head;
	}

	struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next; //双指针迭代。n3用来保存next。

	while (n2)
	{	//反转
		n2->next = n1;

		//迭代
		n1 = n2;
		n2 = n3;

		if (n3)
			n3 = n3->next;
	}

	return n1;
}


//解法2 头插
struct ListNode* reverseList(struct ListNode* head){

    if(head==NULL || head->next ==NULL)
        return head;

    struct ListNode* cur = head;
    struct ListNode* next = cur->next;

    struct ListNode* newNode = NULL;

    while(cur)
    {
        cur->next = newNode;
        newNode  = cur;

        cur =next;
        if(next)
            next = next->next;

    }

    return newNode;
}

//解法3：递归解法
struct ListNode* reverse(struct ListNode* pre, struct ListNode* cur) {
	if (cur == NULL) {
		return pre;
	}
	struct ListNode* tmp = cur->next;
	cur->next = pre;
	//pre = cur;
	//cur = tmp;
	return reverse(cur, tmp);
}

struct ListNode* reverseList(struct ListNode* head) {
	//struct ListNode* cur = head;
	//struct ListNode* pre = NULL;
	return reverse(NULL, head);
}


int main()
{

	return;
}
