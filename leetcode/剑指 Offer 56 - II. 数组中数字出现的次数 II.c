

//˼·: ������ÿ�����Ķ�����λ��ӣ��ú�%��3������µĶ�����λ
//��������Ǹ��������ֵ���
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