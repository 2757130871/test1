

//将数组分为两组，两个单独数分别出现在不同组里,再异或，得到两个单数数
int* FindOnlyDog(const int arr[], int sz)
{
	int sum = 0;
	int i;
	for (i = 0; i < sz; i++)
	{
		sum ^= arr[i];
	}

	int m = 1; //找到为1第m二进制位
	int flag = 32;
	while (flag--)
	{
		if ((sum & m) != 0)
		{
			break;
		}
		m <<= 1;
	}

	int x = 0;
	int y = 0;
	for (i = 0; i < sz; i++)
	{
		if ((m & arr[i]) != 0)
			x ^= arr[i];
		else
			y ^= arr[i];
	}

	int* ret = (int*)malloc(sizeof(int) * 2);

	ret[0] = x;
	ret[1] = y;
	return ret;
}
