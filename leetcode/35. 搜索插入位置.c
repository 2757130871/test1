#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {

	int insertIndex = 0;

	//��������
	int i;
	for (i = 0;i < numsSize;i++)
	{
		//���ƥ�䷵����������
		if (target == nums[i])
		{
			return i;
		}

		//���ھ�����
		if (target > nums[i])
		{
			insertIndex++;
		}

	}

	//��������û���ҵ����ͷ��ز���������
	return insertIndex;
}

int main()
{

	return;
}