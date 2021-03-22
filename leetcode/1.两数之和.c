#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int* res = NULL;
    *returnSize = 2;
    int i, j;
    for (i = 0;i < numsSize - 1;i++)
    {
        for (j = 1;j < numsSize;j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res = (int*)malloc(2 * sizeof(int));
                res[0] = i;
                res[1] = j;

                return res;
            }
        }
    }

    return NULL;
}

int main()
{

	return;
}