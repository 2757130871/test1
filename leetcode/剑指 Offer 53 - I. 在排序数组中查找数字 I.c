
//二分查找的分支
//查找重复元素的第一次出现的下标
//查找重复元素最后一个出现的下标
//最后计算出它们出现的次数

int search(int* nums, int numsSize, int target) {

	if (nums == NULL)    return NULL;

	//求出第一次出现的位置
	int low = lowBound(nums, numsSize, target);
	//最后一次出现的位置
	int high = highBound(nums, numsSize, target);
	
	//如果没有重复元素high小于low返回-1
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