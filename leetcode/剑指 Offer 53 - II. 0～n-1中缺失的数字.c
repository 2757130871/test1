
//如果nums[mid]大于mid 说明mid到末尾都不是下标对应值 缺少的那个值在前面。
// nums[mid]  等于mid 说明mid到开头都是下标对应值 target不在左边。

int missingNumber(int* nums, int numsSize) {


    printf("%d", numsSize);
    if (nums == NULL || numsSize == 0)
        return -1;

    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + ((right - left) >> 1);

        if (nums[mid] != mid)
        {

            if (mid == 0 || nums[mid - 1] == (mid - 1))
            {
                return mid;
            }
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }

        //当left等于数组元素个数时说明缺少的是最后一个元素
        if (left == numsSize) return numsSize;
    }

    return -1;
}