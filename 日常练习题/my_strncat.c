#include <stdio.h> 
#include <assert.h>

char* my_strncat(char* dest, const char* src, size_t sz)
{
	assert(dest && src);

	char* ret = dest;

	while (*dest)
		dest++;

	while (*src && sz != 0)
	{
		*dest = *src;
		dest++;
		src++;
		sz--;
	}

	*dest = '\0';
	return ret;
}

int main()
{
	char dest[22] = "1234567";
	char src[22] = "89abcd";
	//my_strncat(dest, src, 6);

	my_strncpy(dest, src, 0);

	printf(dest);
	return 0;
}

