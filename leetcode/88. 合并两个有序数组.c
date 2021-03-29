#include <stdio.h>


/// <summary>
/// �ÿռ任ʱ��
/// ʱ�临�Ӷȣ�M+N
/// �ռ临�Ӷȣ�M+N
/// 
/// </summary>
/// <param name="nums1"></param>
/// <param name="nums1Size"></param>
/// <param name="m"></param>
/// <param name="nums2"></param>
/// <param name="nums2Size"></param>
/// <param name="n"></param>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int* tmp = malloc(sizeof(int) * (m + n)); //����һ���㹻���������������С

	int i1 = 0, i2 = 0;
	int i = 0;


	while (i1 < m && i2 < n) //��һ�����鿽����ϣ���ֹͣ������
	{
		if (nums1[i1] < nums2[i2]) //С���ȷ������顣
		{
			tmp[i] = nums1[i1];
			i1++;
			i++;
		}
		else //��ĺ���ͬ�ĺ���롣
		{
			tmp[i] = nums2[i2];
			i2++;
			i++;
		}

	}

	//���nums2�����ˣ�nums1��û���꣬˵��nums1ʣ�µĶ��Ǳ�nums2�����д�ġ�
	//ֱ�ӷ�������
	while (i1 < m)
	{
		tmp[i] = nums1[i1];
		i++;
		i1++;
	}

	//ͬ��
	while (i2 < n)
	{
		tmp[i] = nums2[i2];
		i++;
		i2++;
	}
	
	//ʹ��memcpy��������������Ϻ����鿽��Ŀ�����顣
	memcpy(nums1, tmp, sizeof(int) * (m + n));
	free(tmp);
}

int main()
{

	return;
}