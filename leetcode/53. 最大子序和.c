#include <stdio.h>


int maxSubArray(int* nums, int numsSize) {
    int pre = 0, maxAns = nums[0];
    for (int i = 0; i < numsSize; i++) {
        pre = fmax(pre + nums[i], nums[i]);
        maxAns = fmax(maxAns, pre);
    }
    return maxAns;
}


//时间复杂度：O(n)O(n)，
///空间复杂度：O(1)O(1)。

int main()
{

	return;
}