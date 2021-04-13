typedef struct ListNode Node;


//思路：
//先把链表逆置，顺便统计链表长度。
//创建数组，个数为链表长度。
//然后再遍历链表，把节点的值逐个赋值给新数组。
int* reversePrint(struct ListNode* head, int* returnSize) {

    if (head == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    Node* n1 = NULL, * n2 = head, * n3 = head->next;

    int count = 0;

    while (n2)
    {
        n2->next = n1;

        n1 = n2;
        n2 = n3;
        if (n3)
            n3 = n3->next;

        count++;
    }

    int* arr = (int*)malloc(sizeof(int) * count);

    int i = 0;
    while (n1)
    {
        if (i < count)
            arr[i] = n1->val;

        i++;
        n1 = n1->next;
    }

    *returnSize = count;

    return arr;
}