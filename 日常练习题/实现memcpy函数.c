#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>


void* my_memcpy(void* dest, const void* src, size_t count)
{
	//assert(dest && src);

	void* res = dest;//存储dest初始指针。

	while (count--)
	{
		*(char*)dest = *(char*)src;

		++(char*)dest;
		++(char*)src;
	}


	return res;
}

int main()
{
	//实现memcpy函数。


	int arr1[] = { 1,2,3 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr1, sizeof(arr1));




	return 0;
}
