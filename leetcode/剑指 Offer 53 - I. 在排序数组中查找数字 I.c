
//���ֲ��ҵķ�֧
//�����ظ�Ԫ�صĵ�һ�γ��ֵ��±�
//�����ظ�Ԫ�����һ�����ֵ��±�
//����������ǳ��ֵĴ���

int search(int* nums, int numsSize, int target) {

	if (nums == NULL)    return NULL;

	//�����һ�γ��ֵ�λ��
	int low = lowBound(nums, numsSize, target);
	//���һ�γ��ֵ�λ��
	int high = highBound(nums, numsSize, target);
	
	//���û���ظ�Ԫ��highС��low����-1
	if (high < low)
		return -1;

	return (high - low) + 1;

}

int lowBound(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

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

int highBound(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

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