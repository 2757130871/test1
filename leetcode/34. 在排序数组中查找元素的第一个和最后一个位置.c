/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//二分思路
//
//将target等于mid[right/left]的情况和在一起解决，求重复元素的下边界和上边界
//
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    if (nums == NULL)    return NULL;

    //求左边界
    int left = lowbound(nums, numsSize, target);
    //求右边界
    int right = highbound(nums, numsSize, target);

    int* retArr = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;

    //没有重复元素的情况。
    if (left > right)
    {
        retArr[0] = -1;
        retArr[1] = -1;
        return retArr;
    }

    retArr[0] = left;
    retArr[1] = right;

    return retArr;
}


int lowbound(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    //让nums[mid]等于target的情况下，
    //让right继续向左寻找，最后找到left就是左边界
    while (left <= right) 
    {
        int mid = left + (right - left);
        if (target <= nums[mid])
        {
            right = mid - 1;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }

    }
    return left;
}

int highbound(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    //右边界相反
    while (left <= right)
    {
        int mid = left + (right - left);
        if (target < nums[mid])
        {
            right = mid - 1;
        }
        else if (target >= nums[mid])
        {
            left = mid + 1;
        }
    }
    return right;
}