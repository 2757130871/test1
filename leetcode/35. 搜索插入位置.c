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

int main()
{

	return;
}