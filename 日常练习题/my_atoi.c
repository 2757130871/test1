#include <stdio.h> 

enum Status
{
	INVAILD,
	VALID
};

//需要考虑输入不为数字字符的情况。
int main()
{
	
	int flag = 1;
	enum Status status = INVAILD;

	char* arr = "-12345aaa";

	char* ptr = arr;
	if (ptr == NULL)
		return 0;

	if (*ptr == '-')
	{
		flag = -1;
		ptr++;
	}

	int ret = 0;

	while (*ptr != '\0' && '0' <= *ptr && *ptr <= '9')
	{
		ret = ret * 10 + *ptr - '0';
		ptr++;
	}

	ret *= flag;
	
	printf("%d", ret);

	return 0;
}
