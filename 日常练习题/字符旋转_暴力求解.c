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
/// ʵ�ֺ��������������ַ����е�k���ַ���
/// 
/// �磺abcd ����һ���ַ���bcda
/// �磺abcd ���������ַ���cdab
/// 
/// </summary>
/// <returns></returns>
int main()
{
	char arr[] = "abcdef";//��Ҫ�ƶ����ַ����顣

	int k = 2; //��Ҫ�ƶ����ַ�������
	left_move(arr, k);

	printf("%s", arr);
	return 0;
}





