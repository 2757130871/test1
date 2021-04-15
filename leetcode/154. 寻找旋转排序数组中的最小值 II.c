

//利用二分查找

int findMin(int* nums, int numsSize) {

	int low = 0;
	int high = numsSize - 1;

	//当第一个元素小于最后元素说明有序，直接返回
	//数组只有一个元素时直接返回
	if (nums[low] < nums[high] || low == high)
	{
		return nums[low];
	}

	//
	while (low + 1 != high) {

		int pivot = low + (high - low) / 2;
		if (nums[pivot] < nums[high]) {
			high = pivot;
		}
		else if (nums[pivot] > nums[high]) {
			low = pivot;
		}
		else
		{
			high -= 1;
		}
	}

	return nums[high];
}


