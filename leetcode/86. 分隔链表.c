/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

//建立两个新链表：
//小于x的节点放入链表1，大于等于的放入链表2
//链接两个链表

struct ListNode* partition(struct ListNode* head, int x) {

    Node* p1head = (Node*)malloc(sizeof(Node));
    Node* p2head = (Node*)malloc(sizeof(Node));

    Node* p1cur = p1head; //保留头
    Node* p2cur = p2head; //

    Node* p = head; //原链表的移动位

    while (p)
    {
        if (p->val < x) //小于放入链表1
        {
            p1cur->next = p;
            p1cur = p;
        }
        else
        {
            p2cur->next = p;
            p2cur = p;
        }

        p = p->next;
    }

    p2cur->next = NULL; //注意将链表末尾置为空
    p1cur->next = p2head->next; //连接两个链表

    return p1head->next; 
}