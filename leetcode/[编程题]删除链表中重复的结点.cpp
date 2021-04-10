

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {

        //如果链表为空或只有一个结点直接返回。
        if (pHead == NULL || pHead->next == NULL)
            return pHead;

        ListNode* prev = NULL;
        ListNode* cur = pHead;
        ListNode* next = pHead->next;


        while (next)
        {
            if (cur->val != next->val) //注意空指针访问
            {
                prev = cur;
                cur = next;
                next = next->next;
            }
            else
            {
                while (next && cur->val == next->val) //注意next已经为空
                {
                    next = next->next;
                }

                /* while(next && cur->val == next->val)
                 {
                     ListNode* del = cur;
                     cur=cur->next;
                     free(del);
                 }*/

                if (prev) //空指针访问
                    prev->next = next;
                else
                    pHead = next; 

                cur = next;

                if (next)//空指针访问
                    next = next->next;
            }

        }

        return pHead;
    }
};