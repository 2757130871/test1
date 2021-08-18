#include <stdio.h>
#include <math.h>


//输入一个整数n，请输出n到离n最近的一个斐波那契数。
//如：输入： 12 输出：1   

int main()
{
	int n;
	scanf_s("%d", &n);

	int a = 0;//第一个fab数
	int b = 1;//第二个fab数
	int c = a + b;

	if (n <= 0) 
	{
		printf("%d", -n);
		return 0;
	}

	while (1)
	{
		if (n == c)
		{
			printf("%d", 0);
			break;
		}
		else if(n < c)
		{
			if (abs(c - n) < abs(b - c))
			{
				printf("%d", abs(c - n));
			}
			else
			{
				printf("%d", abs(b - n));
			}
			break;
		}

		a = b;
		b = c;
		c = a + b;
	}


	return 0;
}
