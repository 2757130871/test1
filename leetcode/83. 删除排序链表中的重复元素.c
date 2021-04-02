#include <stdio.h>

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) {
        return head;
    }

    struct ListNode* cur = head;
    while (cur->next) {
        if (cur->val == cur->next->val) {
            cur->next = cur->next->next;
        }
        else {
            cur = cur->next;
        }
    }

    return head;
}



int main()
{

	return;
}