#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/// <summary>
/// ������a������b�������Ӧ��ͬλ�á�
/// ��������ʹ������ͬʱ����ߣ������ͬ���ص�ǰ�ڵ㡣
/// ��������û�з���˵������û���ཻ��
/// </summary>
/// 
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

    struct ListNode* curA = headA;
    struct ListNode* curB = headB;

    //��¼����������
    int stepA = 0;
    int stepB = 0;

    while (curA)
    {
        stepA++;
        curA = curA->next;
    }

    while (curB)
    {
        stepB++;
        curB = curB->next;
    }

    //�ҵ�������Ͷ�����
    struct ListNode* longList = headA;
    struct ListNode* shortList = headB;

    if (stepB > stepA)
    {
        longList = headB;
        shortList = headA;
    }

    //�õ�����������ֵ
    int gap = abs(stepA - stepB);

    //�ó�����Ͷ������Ӧ�������
    while (gap--)
    {
        longList = longList->next;
    }

    //�Ƚ�
    while (longList)
    {
        if (longList == shortList)
        {
            return longList;
        }

        longList = longList->next;
        shortList = shortList->next;
    }

    //��������û��ͬ�ڵ㣬����NULL
    return NULL;
}

int main()
{

	return;
}