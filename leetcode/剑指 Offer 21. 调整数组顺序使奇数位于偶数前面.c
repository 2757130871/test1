/**
 * Note: The returned array must be malloced, assume caller calls free().
 */



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