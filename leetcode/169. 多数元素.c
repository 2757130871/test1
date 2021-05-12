
//整体思路：
//根据题意，题目中有一个数字出现的次数超过数组元素一半。
//那么这个数组出现次数一定比其他数字出现的次数加起来还要多。
//

int majorityElement(int* nums, int numsSize){

    if(!nums)   return -1;

    int ret = nums[0];
    int times = 1;

    int i;
    for(i=1;i<numsSize;i++)
    {
        if(ret==nums[i])
        {
            times++;
        }
        else
        {
            times--;
        }

        if(times == 0)
        {
            ret = nums[i];
            times = 1;
        }
    }

    return ret;
}
