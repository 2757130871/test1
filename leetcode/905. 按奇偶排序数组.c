#include <stdio.h>


//��ײ˫ָ����⡣
int* sortArrayByParity(int* A, int ASize, int* returnSize) {

    int* left = A;
    int* right = A + ASize - 1;

    
    while (left < right)
    {
        //�������һ��������
        while (left < right && *left % 2 == 0)
        {
            left++;
        }

        //�ұ���һ��ż����
        while (left < right && *right % 2 != 0)
        {
            right--;
        }

        //���left<right�ͽ�����
        if (left < right)
        {
            int tmp = *left;
            *left = *right;
            *right = tmp;
        }

    }

    *returnSize = ASize;

    return A;
}

int main()
{

	return;
}