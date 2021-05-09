
//.....
//比较二进制的每一位。。。
int main()
{
	int m = 1999;
	int n = 2299;
	int count = 0;
	int m1 = m, n1 = n;

	int i = 32;
	while (i--)
	{
		if (m1 % 2 != n1 % 2)
		{
			count++;
		}
		m1 /= 2;
		n1 /= 2;
	}

	printf("%d", count);
	return;
}