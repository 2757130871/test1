#include <string.h>
#include <stdio.h>

/// <summary>
/// 
/// 杨氏矩阵是一个每一行的数从左到右或者每一列的数从上到下都是从小到大排列的矩阵。
/// 通过观察可以发现，最右上角的这个数字9是一个很特别的数字，从行来看它是这一行中最大的数字，
/// 如果从列来看，它是这一列最小的数字。最左下角的数字也一样，它比所在的同一列的数都大，比同一行都小。
///  假设我们需要在这个矩阵里查找一个数，设为k。k如果大于9，那么9所在的那一整行就都小于k，
/// 就不需要比较了，k如果小于9，那么9所在的行也都比k大。理清了思路，接下来就简单了，定义一个横坐标，一个纵坐标。
/// 通过横纵坐标，我们就能一直得到数组最右上角的那个数去和所求数比较，如果不大于k也不小于k，就说明找到了这个数。。。。。
/// </summary>
/// <param name="arr"></param>
/// <param name="k"></param>
/// <param name="row"></param>
/// <param name="col"></param>
/// <returns></returns>
int getNum(int arr[3][5], int k, int row, int col)
{
	int x = 0;//定义初始坐标，可以为右上角或者左下角。
	int y = col - 1;


	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}

	}

	return 0;
}

int main()
{
	int arr[3][5] = { {1,2,4,7,9},{2,3,5,8,12}, {5,6,7,17,29} };
	int k = 29;

	int res = getNum(arr, k, 3, 5);
	if (res == 1)
	{
		printf("找到了");
	}
	else
	{
		printf("矩阵中无此数");

	}
	return;
}