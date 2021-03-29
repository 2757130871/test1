#include <stdio.h>


/// <summary>
/// 用空间换时间
/// 时间复杂度：M+N
/// 空间复杂度：M+N
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
	int* tmp = malloc(sizeof(int) * (m + n)); //开辟一个足够存放排序完毕数组大小

	int i1 = 0, i2 = 0;
	int i = 0;


	while (i1 < m && i2 < n) //有一个数组拷贝完毕，就停止拷贝。
	{
		if (nums1[i1] < nums2[i2]) //小的先放入数组。
		{
			tmp[i] = nums1[i1];
			i1++;
			i++;
		}
		else //大的和相同的后放入。
		{
			tmp[i] = nums2[i2];
			i2++;
			i++;
		}

	}

	//如果nums2放完了，nums1还没放完，说明nums1剩下的都是比nums2数组中大的。
	//直接放入数组
	while (i1 < m)
	{
		tmp[i] = nums1[i1];
		i++;
		i1++;
	}

	//同理
	while (i2 < n)
	{
		tmp[i] = nums2[i2];
		i++;
		i2++;
	}
	
	//使用memcpy函数，把排序完毕后数组拷贝目标数组。
	memcpy(nums1, tmp, sizeof(int) * (m + n));
	free(tmp);
}

int main()
{

	return;
}