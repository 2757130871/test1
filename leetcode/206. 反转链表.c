#include <stdio.h>



//解法1：双指针迭代
struct ListNode* reverseList(struct ListNode* head)
{
	struct ListNode* cur = head;
	struct ListNode* pre = NULL;
	while (cur) {
		struct ListNode* tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}
	return pre;
}




//解法2：递归
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
