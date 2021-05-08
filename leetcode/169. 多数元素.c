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

���ߣ�world - 16
���ӣ�https://leetcode-cn.com/problems/majority-element/solution/liang-chong-fang-fa-onhe-onlogn-by-world-16/
��Դ�����ۣ�LeetCode��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������