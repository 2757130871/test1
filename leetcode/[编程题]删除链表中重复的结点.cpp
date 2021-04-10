

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {

        //�������Ϊ�ջ�ֻ��һ�����ֱ�ӷ��ء�
        if (pHead == NULL || pHead->next == NULL)
            return pHead;

        ListNode* prev = NULL;
        ListNode* cur = pHead;
        ListNode* next = pHead->next;


        while (next)
        {
            if (cur->val != next->val) //ע���ָ�����
            {
                prev = cur;
                cur = next;
                next = next->next;
            }
            else
            {
                while (next && cur->val == next->val) //ע��next�Ѿ�Ϊ��
                {
                    next = next->next;
                }

                /* while(next && cur->val == next->val)
                 {
                     ListNode* del = cur;
                     cur=cur->next;
                     free(del);
                 }*/

                if (prev) //��ָ�����
                    prev->next = next;
                else
                    pHead = next; 

                cur = next;

                if (next)//��ָ�����
                    next = next->next;
            }

        }

        return pHead;
    }
};