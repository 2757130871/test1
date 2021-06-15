#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

void* my_memcpy(const char* dest, const char* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(const char* dest, const char* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	if (dest > src)
	{
		//从后向前拷贝
		char* destRear = (char*)dest + num - 1;
		char* srcRear = (char*)src + num - 1;

		while (num--)
		{
			*destRear = *srcRear;
			destRear = (char*)destRear - 1;
			srcRear = (char*)srcRear - 1;
		}

		return ret;
	}
	else
	{
		//从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;

			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
		return ret;
	}

	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memmove(arr1, arr1 + 2, 20);
	printf("%d", sizeof(struct S));	/*strtok
	char arr[] = "woshi.shabi@giao.com";
	char* tick = ".@";

	char* tmp = NULL;
	for (tmp = strtok(arr,tick);tmp != NULL;tmp = strtok(NULL, tick))
	{
		printf("%s\n", tmp);
	}*/

	return 0;
}