#include <stdio.h>
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/


/// <summary>
/// ���������������������������������β�塣С�ڲ���a�������ڵ��ڲ���b����
/// ����������
/// ע�⣺���b������Ԫ�ر����һ��Ԫ��С���������ѭ����
/// ��b�������һ��Ԫ��next��λNULL
/// </summary>
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {

        struct ListNode* smallNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* smallhead = smallNode;
        struct ListNode* bigNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* bighead = bigNode;

        struct ListNode* tail = pHead;


        while (tail)
        {
            if (tail->val < x)
            {
                smallNode->next = tail;
                smallNode = smallNode->next;
            }
            else
            {
                bighead->next = tail;
                bighead = bighead->next;
            }
            tail = tail->next;
        }

        smallNode->next = bigNode->next;
        bighead->next = NULL;


        return smallhead->next;

    }
};

int main()
{

	return;
}