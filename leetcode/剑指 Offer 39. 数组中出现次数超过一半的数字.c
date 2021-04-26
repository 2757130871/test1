
//������Ŀ �������ظ���Ԫ�س��ֵĴ�������������Ԫ�س��ִ�����������Ҫ��
//������µ�һ���ǳ��ִ�������һ���Ԫ��

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