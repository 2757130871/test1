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
/// ����һ������ͳ�������������1�ĸ���
/// </summary>
/// <returns>�����������1�ĸ���</returns>

int main()
{
	int a;
	scanf_s("%d", &a);

	int res = get_one(a);
	printf("%d", res);

	return 0;
}
