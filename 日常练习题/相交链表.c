/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



typedef struct ListNode Node;

//思路： list1 list2 
//先计算两个链表其节点个数 cnt1 cnt2
//让短的节点先走 |cnt1 - cnt2|步
//让list1 list2同时遍历 如果相同说明相交

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    if(!headA || !headB) return NULL;

    Node* cur1 = headA;
    Node* cur2 = headB;

    int count1 = 0;
    int count2 = 0;

    while(cur1)
    {
        cur1 = cur1->next;
        count1++;   
    }

    while(cur2)
    {
        cur2 = cur2->next;
        count2++;   
    }

    cur1 = headA;
    cur2 = headB;
    int tmp;
    if(count1 < count2)
    {
        tmp = count2 - count1;
        while(tmp--)
            cur2 = cur2->next;
        
        while(cur1 && cur2)
        {
            if(cur1 == cur2)
                return cur1;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }

        return NULL;
    }
    else if(count1 > count2)
    {
        tmp = count1 - count2;
        while(tmp--)
            cur1 = cur1->next;
        
        while(cur1 && cur2)
        {
            if(cur1 == cur2)
                return cur1;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return NULL;
    }

      while(cur1 && cur2)
        {
            if(cur1 == cur2)
                return cur1;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
    

    return NULL;
}
