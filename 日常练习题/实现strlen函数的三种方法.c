#include <stdio.h>
#include <assert.h>

/// <summary>
/// 使用计数器实现
/// </summary>
/// <param name="p"></param>
/// <returns></returns>
int my_strlen1(const char* p)
{
	int count = 0;
	assert(p != NULL);

	while (*p != '\0')
	{
		count++;
		p++;
	}

	return count;
}


/// <summary>
/// 指针减指针等于它们之间元素个数。
/// </summary>
/// <param name="arr"></param>
/// <returns></returns>
int my_strlen2(const char* arr)
{
	assert(arr != NULL);

	char* start = arr;
	char* end = arr;

	while (*end != '\0')
	{
		end++;
		str++;
	}

	return end - start;
}

/// <summary>
/// 递归实现。
/// </summary>
/// <param name="arr"></param>
/// <returns></returns>
int my_strlen3(const char* arr)
{
	assert(arr != NULL);

	if (*str == '\0')
		return 0;

	return my_strlen3(arr + 1) + 1;

}



int main()
{

	return;
}