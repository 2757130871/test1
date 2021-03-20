#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>


/// <summary>
///ʵ��memcpy����
/// </summary>
/// <returns></returns>
void* my_memmove(void* dest, const void* src, size_t sum)
{
	assert(dest && src);

	void* res = dest;

	if (dest < src)
	{
		while (sum--)
		{
			*(char*)dest = *(char*)src;

			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (sum--)
		{
			*((char*)dest + sum) = *((char*)src + sum);
		}
	}

	return res;
}

void* my_memcpy(void* dest, const void* src, size_t sum)
{
	assert(dest && src);

	void* res = dest;

	while (sum--)
	{
		*(char*)dest = *(char*)src;

		++(char*)dest;
		++(char*)src;
	}

	return res;
}

int main()
{
	//ʵ��memcpy������

	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[10] = { 0 };


	my_memcpy(arr1 + 4, arr1 + 2, 20); //��vs���������£�memcpyҲʵ����

	int i;
	for (i = 0;i < 9;i++)
	{
		printf("%d ", arr1[i]);
	}



	return 0;
}

