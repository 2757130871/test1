#include <stdio.h>
//思路：指针加减整数，
void my_strcpy(char* dest, const char* src)
{
	while (*src != '\0')
	{
		*dest = *src;

		src++;
		dest++;
	}
}

int main()
{
	char arr1[10] = { '1' };
	char arr2[10] = "123sads";

	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}