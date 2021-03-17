#include <stdio.h>

void left_move(char* str, int k)
{
	int len = strlen(str);
	int i;
	for (i = 0;i < k;i++)
	{
		char tmp = *str;

		int j;
		for (j = 0;j < len - 1;j++)
		{
			*(str + j) = *(str + j + 1);
		}

		*(str + len - 1) = tmp;
	}

}

/// <summary>
/// 实现函数，可以左旋字符串中的k个字符。
/// 
/// 如：abcd 左旋一个字符：bcda
/// 如：abcd 左旋二个字符：cdab
/// 
/// </summary>
/// <returns></returns>
int main()
{
	char arr[] = "abcdef";//需要移动的字符数组。

	int k = 2; //需要移动的字符个数。
	left_move(arr, k);

	printf("%s", arr);
	return 0;
}





