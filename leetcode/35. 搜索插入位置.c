#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {

	int insertIndex = 0;

	//遍历数组
	int i;
	for (i = 0;i < numsSize;i++)
	{
		//如果匹配返回所在索引
		if (target == nums[i])
		{
			return i;
		}

		//大于就增加
		if (target > nums[i])
		{
			insertIndex++;
		}

	}

	//遍历结束没有找到，就返回插入索引。
	return insertIndex;
}


//二分法，和标准二分一样，只是找不到的话返回的是待插入的位置。
int searchInsert(int* nums, int numsSize, int target) {

	int left = 0;
    int right = numsSize - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(nums[mid] > target)
        {
            right = mid - 1;
        }
        else if(nums[mid] < target)
        {
            left  = mid + 1;
        }
        else
        {
            return mid;
        }
        
    }
	
	return left;
}
