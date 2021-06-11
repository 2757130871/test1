#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* ret = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;

	return ret;
}

char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* ret = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = 0;
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

typedef struct s1
{
	char name[10];
	int age;
}ss;

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((ss*)e1)->name, ((ss*)e2)->name);
}

int main()
{
	int arr[] = { 1,4,5,2,5,8,2,31,6,54,4354,32 };

	ss structArr[] = { {"张三",20},{"李四",40},{"王五",50} };
	int size = sizeof(structArr) / sizeof(structArr[1]);


	//elem1：待排序数组的首元素地址
	//elem2：待排序数组的元素个数
	//elem3：待排序数组元素的大小
	//elem4：是一个函数指针，函数参数为两个为const void*的参数，返回int
	//用来比较待排序数组中两个元素（参数1大于参数2返回大于0，参数1小于参数2返回小于0，等于返回0）
	qsort(structArr, size, sizeof(structArr[1]), cmp_name);
	return 0;
}

//char c = 1;

	//printf("%d\n", sizeof(c));//1
	//printf("%d\n", sizeof(+c));//4 发生了整形提升
	//printf("%d\n", sizeof(-c));//4
	//printf("%d\n", sizeof(!c)); //在gcc编译器下为4 因为vs编译器不够符合标准

// 00000011
// 01111111

// 10000010 10000010 --求出补码
// 11111111 11111111 11111111
// 11111111 11111111 11111111 10000001 --补码-1得出反码 
// 10000000 00000000 00000000 01111110 --反码符号位不变其他位取反得出源码

//位运算，利用了异或和与的特性，
//异或操作和加和操作的区别在于异或操作在二进制状态下两个数同1不进位，
//只是置为0，其他均相同，那么使用与运算计算进位值，补齐异或操作的缺点即可，
//与运算中只有两个数二进制位同1才置为1，所以只要两个数相与，二进制数为1的地方就是需要进位的地方，
//再左移一位，得到的值就是异或操作模拟加和操作时需要的进位数，将其和结果异或，不断重复上述操作直到进位值为0返回结果

// 101 a = 5
// 011 b = 3

//diff = 010
// 
//a = 110
//

