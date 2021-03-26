#include <stdio.h>

/// <summary>
///	使用异或的方式，让一个无缺的数组和原数组所有元素异或到一起，
/// 相同的异或一起变成0，最后留下单独的数。这个数就是所求的数。
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <returns></returns>
int missingNumber(int* nums, int numsSize) {

	int res = 0;
	int i = 0;
	for (i = 0;i < numsSize;i++)
	{
		res ^= nums[i];
	}

	for (i = 0;i < numsSize + 1;i++)
	{
		res ^= i;
	}

	return res;
}

int main()
{

	return;
}