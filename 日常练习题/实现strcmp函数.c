#include <stdio.h>

int my_strcmp(char* str1, const char* str2)
{
	assert(str1 && str2);


	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;

		str1++;
		str2++;
	}

	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char str1[] = "abcg";
	char str2[] = "abcga";

	int res = my_strcmp(str1, str2);

	printf("%d", res);


	return 0;
}