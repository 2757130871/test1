//思路：
// nums[mid]小于nums[right] 说明右子数组是有序的，
// nums[mid]大于nums[left] 说明左子数组是有序的，
//通过判断target在哪边 可以判断出保留哪边

int search(int* nums, int numsSize, int target) {

	int left = 0;
	int right = numsSize - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (nums[mid] == target)
			return mid;

		if (nums[mid] < nums[right])
		{
			if (nums[mid] < target && target <= nums[right])// 
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		else
		{
			if (nums[mid] > target && nums[left] <= target)//
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}

	}

	return -1;
}
