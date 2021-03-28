#include <stdio.h>




int removeDuplicates(int* nums, int numsSize) {

    if (numsSize == 0) //数组元素为0，返回0
        return 0;

    int prev = 0; //定义前后双指针
    int cur = 1;
    int dst = 0;//记录长度

    while (cur < numsSize)
    {
        if (nums[prev] != nums[cur]) //如果不同，把prev赋值给dst，dst加1.
        {
            nums[dst] = nums[prev];

            prev++;
            dst++;
            cur++;
        }
        else //如果前后两个数相同，继续寻找，直到不同。
        {
            prev++;
            cur++;
        }
    }

    //循环结束，prev指针指向最后一个元素，赋值给dst
    nums[dst] = nums[prev];

    dst++; //dst从0开始计数，数组长度为dst+1
        
    return dst;//返回排序完数组长度
}


int main()
{

	return;
}