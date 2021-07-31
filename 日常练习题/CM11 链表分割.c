


typedef struct ListNode Node;

//定义两个新链表，
//遍历原链表，将小于x的节点插入链表1，其余的插入链表2
//再连接两个链表
//注意点：
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        
        if(!pHead)    return nullptr;
        
        Node* newHead = (Node*)malloc(sizeof(Node));
        Node* n1 = newHead;
        Node* newTail = (Node*)malloc(sizeof(Node));
        Node* n2 = newTail;
        
        Node*  cur = pHead;
        
        while(cur)
        {
            if(cur->val < x)
            {
                n1->next = cur;
                n1 = n1->next;
                cur = cur->next;
            }
            else           
            {
                n2->next = cur;
                n2 = n2->next;
                cur = cur->next;
            }
        }
        
        n1->next = newTail->next;
        n2->next = nullptr;
        
        Node* ret = newHead->next;
        free(newHead);
        free(newTail);
        
        return ret;
    }
};
