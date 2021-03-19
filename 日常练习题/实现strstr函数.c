#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char arr1[], const char arr2[])
{
	assert(arr1 && arr2);

	char* s1 = (char*)arr1;
	char* s2 = (char*)arr2;
	char* cur = (char*)arr1;

	if (!*s2)
		return NULL;


	while (*cur)
	{
		s1 = cur;
		s2 = arr2;

		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}

		if (!*s2)
		{
			return (char*)cur;
		}

		cur++;
	}

	return NULL;

}

int main()
{
	char arr1[] = "asdjakcd";
	char arr2[] = "cd";

	char* parr = my_strstr(arr1, arr2);
	printf("%s", parr);


	return 0;
}