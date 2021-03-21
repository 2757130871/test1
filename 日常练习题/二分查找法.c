#include <stdio.h>

//给定一个有序数组和值 如果这个值在这个数组中存在就返回对应的索引 
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int k = 113;

	int length = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = length - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("%s", "找到了");
			printf("%d", mid);
			break;
		}
	}

	if (left > right) {
		printf("%s", "没找到");
	}
	return 0;
}