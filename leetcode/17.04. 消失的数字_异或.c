#include <stdio.h>

/// <summary>
///	ʹ�����ķ�ʽ����һ����ȱ�������ԭ��������Ԫ�����һ��
/// ��ͬ�����һ����0��������µ���������������������������
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <returns></returns>
int missingNumber(int* nums, int numsSize) {

	int res = 0;
	int i = 0;
	for (i = 0;i < numsSize;i++)
	{
		res ^= nums[i];
	}

	for (i = 0;i < numsSize + 1;i++)
	{
		res ^= i;
	}

	return res;
}

int main()
{

	return;
}