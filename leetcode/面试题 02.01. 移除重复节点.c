

//˼·��
//hash�� ��ҪO(N)�Ŀռ�
//�������� ���valû���ֹ��ͽ�val�����hash��
//���ֹ��������ڵ�

class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        if (!head)   return nullptr;

        unordered_set<int> set = { head->val };

        ListNode* pos = head;

        while (pos->next != nullptr) {

            ListNode* cur = pos->next;
            //û���ֹ�����ӽ�has������������
            if (!set.count(cur->val)) 
            {
                set.insert(cur->val);
                pos = pos->next;
            }
            else //���ֹ��������ýڵ�
            { 
                pos->next = pos->next->next;
            }
        }

        return head;
    }
};