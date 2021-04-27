

//思路: 让数组每个数的二进制位相加，让后%上3最后留下的二进制位
//就组成了那个单独出现的数
//


int singleNumber(int* nums, int numsSize) {
	unsigned int arr[32] = { 0 };
	int i;
	for (i = 0;i < numsSize; i++)
	{
		unsigned int bit = 1;
		int j;
		for (j = 0;j < 32;j++)
		{
			if (nums[i] & bit)
			{
				arr[j] += 1;
			}
			bit = bit << 1;
		}
	}
	for (i = 0;i < 32;i++)
	{
		arr[i] %= 3;
	}

	int target = 0;
	for (i = 0;i < 32;i++)
	{
		target += getWeight(arr[i], i);
	}
	return target;
}


int getWeight(int num, int n)
{
	if (n == 0 || num == 0) return num;

	int i;
	for (i = 0;i < n;i++)
	{
		num *= 2;
	}
	return num;
}