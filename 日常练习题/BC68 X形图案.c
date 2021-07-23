
#include <stdio.h>


//在行和列相等的位置一定有*
//行和列相加等于n-1一定有*
//其他情况下为空格
int main()
{

	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			int j;
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else if (i + j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}


	return 0;
}
