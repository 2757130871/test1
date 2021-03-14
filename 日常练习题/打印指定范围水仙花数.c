#include <stdio.h>
//1：确定被求数的位数 n
//2：计算出被求数每一位的n次方相加sum
//3：比较sum==i 
int main()
{
	//实现打印水仙花数

	int i;
	for (i = 153;i < 10000;i++)
	{

		int tmp = 10;
		int count = 1;
		while (1)
		{
			if ((i / tmp) > 0)
			{
				count++;
				tmp *= 10;
			}
			else
			{
				break;
			}
		}

		int res = 0;
		int giao = 1;

		int j;
		int sum = 0;

		int ii = i;
		for (j = 0;j < count;j++)
		{
			res = ii % 10;
			int k;
			for (k = 0;k < count;k++)
			{
				giao *= res;
			}

			sum += giao;
			giao = 1;
			ii /= 10;
		}

		if (sum == i)
		{
			printf("%d\n", sum);
		}

	}

	return 0;
}