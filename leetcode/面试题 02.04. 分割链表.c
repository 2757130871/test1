#include <stdio.h>
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/


/// <summary>
/// 定义两个新链表。遍历链表，对新链表进行尾插。小于插入a链表。大于等于插入b链表。
/// 链接两链表。
/// 注意：如果b链表有元素比最后一个元素小。会造成死循环。
/// 把b链表最后一个元素next置位NULL
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