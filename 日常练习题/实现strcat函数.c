#include <stdio.h>

void my_strcat(char* dest, const char* src)
{
	while (*dest)
	{
		dest++;
	}

	while (*dest++ = *src++)
	{
		;
	}

}

int main()
{
	char arr1[20] = "123";
	char arr2[] = "456";

	my_strcat(arr1, arr2);
	printf("%s\n", arr1);


	return 0;
}