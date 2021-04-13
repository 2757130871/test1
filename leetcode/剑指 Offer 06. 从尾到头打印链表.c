typedef struct ListNode Node;


//˼·��
//�Ȱ��������ã�˳��ͳ�������ȡ�
//�������飬����Ϊ�����ȡ�
//Ȼ���ٱ��������ѽڵ��ֵ�����ֵ�������顣
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