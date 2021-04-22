/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


//从左边找一个偶数
//右边找一个奇数
//如果左偶数下标小于奇数就交换

int* exchange(int* nums, int numsSize, int* returnSize) {


    int left = 0;
    int right = numsSize - 1;

    while (left < right)
    {
        if (nums[left] % 2 == 1 && left < right)
        {
            left++;
        }
        if (nums[right] % 2 == 0 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
        }

    }

    *returnSize = numsSize;
    return nums;
}
