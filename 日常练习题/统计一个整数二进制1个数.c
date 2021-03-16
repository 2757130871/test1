#include <stdio.h>


int get_one(int  a)
{
	int count = 0;

	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
		}

		a /= 2;
	}

	return count;
}

/// <summary>
/// 输入一个整数统计这个数二进制1的个数
/// </summary>
/// <returns>这个数二进制1的个数</returns>

int main()
{
	int a;
	scanf_s("%d", &a);

	int res = get_one(a);
	printf("%d", res);

	return 0;
}
