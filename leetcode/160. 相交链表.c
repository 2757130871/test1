#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/// <summary>
/// 让链表a和链表b处于相对应的同位置。
/// 遍历链表，使两链表同时向后走，如果相同返回当前节点。
/// 遍历结束没有返回说明链表没有相交。
/// </summary>
/// 
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

    struct ListNode* curA = headA;
    struct ListNode* curB = headB;

    //记录两个链表长度
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

    //找到长链表和短链表
    struct ListNode* longList = headA;
    struct ListNode* shortList = headB;

    if (stepB > stepA)
    {
        longList = headB;
        shortList = headA;
    }

    //得到两链表距离差值
    int gap = abs(stepA - stepB);

    //让长链表和短链表对应长度相等
    while (gap--)
    {
        longList = longList->next;
    }

    //比较
    while (longList)
    {
        if (longList == shortList)
        {
            return longList;
        }

        longList = longList->next;
        shortList = shortList->next;
    }

    //遍历结束没相同节点，返回NULL
    return NULL;
}

int main()
{

	return;
}