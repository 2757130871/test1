#include <stdio.h>


//对撞双指针求解。
int* sortArrayByParity(int* A, int ASize, int* returnSize) {

    int* left = A;
    int* right = A + ASize - 1;

    
    while (left < right)
    {
        //从左边找一个奇数。
        while (left < right && *left % 2 == 0)
        {
            left++;
        }

        //右边找一个偶数。
        while (left < right && *right % 2 != 0)
        {
            right--;
        }

        //如果left<right就交换。
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