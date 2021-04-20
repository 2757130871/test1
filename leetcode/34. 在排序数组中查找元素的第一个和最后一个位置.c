/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//����˼·
//
//��target����mid[right/left]���������һ���������ظ�Ԫ�ص��±߽���ϱ߽�
//
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    if (nums == NULL)    return NULL;

    //����߽�
    int left = lowbound(nums, numsSize, target);
    //���ұ߽�
    int right = highbound(nums, numsSize, target);

    int* retArr = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;

    //û���ظ�Ԫ�ص������
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

    //��nums[mid]����target������£�
    //��right��������Ѱ�ң�����ҵ�left������߽�
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

    //�ұ߽��෴
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