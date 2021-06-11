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

	ss structArr[] = { {"����",20},{"����",40},{"����",50} };
	int size = sizeof(structArr) / sizeof(structArr[1]);


	//elem1���������������Ԫ�ص�ַ
	//elem2�������������Ԫ�ظ���
	//elem3������������Ԫ�صĴ�С
	//elem4����һ������ָ�룬��������Ϊ����Ϊconst void*�Ĳ���������int
	//�����Ƚϴ���������������Ԫ�أ�����1���ڲ���2���ش���0������1С�ڲ���2����С��0�����ڷ���0��
	qsort(structArr, size, sizeof(structArr[1]), cmp_name);
	return 0;
}

//char c = 1;

	//printf("%d\n", sizeof(c));//1
	//printf("%d\n", sizeof(+c));//4 ��������������
	//printf("%d\n", sizeof(-c));//4
	//printf("%d\n", sizeof(!c)); //��gcc��������Ϊ4 ��Ϊvs�������������ϱ�׼

// 00000011
// 01111111

// 10000010 10000010 --�������
// 11111111 11111111 11111111
// 11111111 11111111 11111111 10000001 --����-1�ó����� 
// 10000000 00000000 00000000 01111110 --�������λ��������λȡ���ó�Դ��

//λ���㣬����������������ԣ�
//�������ͼӺͲ��������������������ڶ�����״̬��������ͬ1����λ��
//ֻ����Ϊ0����������ͬ����ôʹ������������λֵ��������������ȱ�㼴�ɣ�
//��������ֻ��������������λͬ1����Ϊ1������ֻҪ���������룬��������Ϊ1�ĵط�������Ҫ��λ�ĵط���
//������һλ���õ���ֵ����������ģ��ӺͲ���ʱ��Ҫ�Ľ�λ��������ͽ����򣬲����ظ���������ֱ����λֵΪ0���ؽ��


// 101 a = 5
// 011 b = 3

//diff = 010
// 
//a = 110
//

