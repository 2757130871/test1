

//思路：
//hash表 需要O(N)的空间
//遍历链表 如果val没出现过就将val添加入hash表
//出现过就跳过节点

class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        if (!head)   return nullptr;

        unordered_set<int> set = { head->val };

        ListNode* pos = head;

        while (pos->next != nullptr) {

            ListNode* cur = pos->next;
            //没出现过就添加进has表，并继续遍历
            if (!set.count(cur->val)) 
            {
                set.insert(cur->val);
                pos = pos->next;
            }
            else //出现过就跳过该节点
            { 
                pos->next = pos->next->next;
            }
        }

        return head;
    }
};