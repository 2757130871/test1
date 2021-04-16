

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



//另一种思路

//当left right mid三个下标指向的值相等时，就只能遍历寻找了。

int findMin(int* nums, int numsSize){

    int left = 0;
    int right = numsSize - 1;

    if (nums[left] < nums[right] || left == right)
	{
		return nums[left];
	}

    while(left + 1 != right)
    {
        int mid = (left + right)/2; 

        if(nums[mid] < nums[right])
        {   
            right = mid;
        }
        else if(nums[mid] > nums[left])
        {   
            left = mid;
        }
        else
        {
            return getMin(nums,left,right);
        }

    }

    return nums[right];
}

int getMin(int* nums,int left,int right)
{
    int min = nums[left];

    int i;
    for(i=left+1;i<=right;i++)
    {
        if(nums[i]<min)
            min = nums[i];
    }
    return min;
}

