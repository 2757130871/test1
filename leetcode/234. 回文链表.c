/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

Node* rerverse(Node* head)
{
    if(!head)   return NULL;
    Node* n1 = NULL;
    Node* n2 = head;
    Node* n3 = head->next;

    while(n2)
    {
        n2->next = n1;
        
        n1 = n2;
        n2 = n3;
        if(n3)
            n3 = n3->next;
    }
    return n1;
}

//思路: 先找到链表的中位数（如果链表节点数量为双数找到其下中位数）
//逆序下半部分链表 1->2->2->1  -->>  1->2->1->2
//此时从链表头部和逆序完的后半部分链表遍历比较，如果遍历比较到链表尾还相同就说明此链表为回文链表
//但是这种算法会破坏原链表结构
bool isPalindrome(struct ListNode* head){
    
    if(!head) return false;

    Node* fast = head;
    Node* slow = head;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    //reverse
    
    Node* middle = rerverse(slow);
    if(!middle) return false;
    
    while(middle && middle->val == head->val)
    {
        middle= middle->next;
        head = head->next;
    }

    if(!middle)
    {
        return true;
    }

    return false;
}
