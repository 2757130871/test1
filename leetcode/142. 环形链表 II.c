#include <stdio.h>


struct ListNode* detectCycle(struct ListNode* head) {

    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
            break;
    }

    if (fast == NULL || fast->next == NULL)
        return NULL;

    while (fast != head)
    {
        fast = fast->next;
        head = head->next;
    }

    return fast;
}

int main()
{

	return;
}