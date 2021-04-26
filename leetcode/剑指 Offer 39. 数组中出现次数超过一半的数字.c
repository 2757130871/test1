
//根据题目 数组中重复的元素出现的次数比其他所有元素出现次数加起来还要多
//最后留下的一定是出现次数超过一半的元素

int majorityElement(int* nums, int numsSize) {

    int ret = nums[0];
    int times = 1;

    int i;
    for (i = 1;i < numsSize;i++)
    {

        if (ret == nums[i])
        {
            times++;
        }
        else if (ret != nums[i])
        {
            times--;
        }

        if (times == 0)
        {
            ret = nums[i];
            times = 1;
        }
    }

    return ret;
}