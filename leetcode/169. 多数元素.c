int majorityElement(int* nums, int numsSize) {
    int key = nums[0];
    int count = 0;
    for (size_t i = 0; i < numsSize; i++)
    {
        if (nums[i] == key)
            count++;
        else
            count--;

        if (count <= 0)
        {
            key = nums[i + 1];
        }

    }
    return key;
}

作者：world - 16
链接：https://leetcode-cn.com/problems/majority-element/solution/liang-chong-fang-fa-onhe-onlogn-by-world-16/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。