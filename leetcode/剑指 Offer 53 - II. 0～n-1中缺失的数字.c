
//���nums[mid]����mid ˵��mid��ĩβ�������±��Ӧֵ ȱ�ٵ��Ǹ�ֵ��ǰ�档
// nums[mid]  ����mid ˵��mid����ͷ�����±��Ӧֵ target������ߡ�

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

        //��left��������Ԫ�ظ���ʱ˵��ȱ�ٵ������һ��Ԫ��
        if (left == numsSize) return numsSize;
    }

    return -1;
}