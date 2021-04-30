/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

//��������������
//С��x�Ľڵ��������1�����ڵ��ڵķ�������2
//������������

struct ListNode* partition(struct ListNode* head, int x) {

    Node* p1head = (Node*)malloc(sizeof(Node));
    Node* p2head = (Node*)malloc(sizeof(Node));

    Node* p1cur = p1head; //����ͷ
    Node* p2cur = p2head; //

    Node* p = head; //ԭ������ƶ�λ

    while (p)
    {
        if (p->val < x) //С�ڷ�������1
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

    p2cur->next = NULL; //ע�⽫����ĩβ��Ϊ��
    p1cur->next = p2head->next; //������������

    return p1head->next; 
}