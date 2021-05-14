
void Swap(int arr[],int i,int j)
{
	if (!arr)	return;
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;

}

//选择排序
//基本思想：
//减少交换的次数，找到需要交换的关键字再进行交换。
//节省了交换时带来的性能损耗。
void SelectSort(int arr[], int len)
{

	int i;
	for (i = 0;i < len;i++)
	{
		int min = i;
		int j;

		for (j = i + 1;j < len;j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}

		}
		if (min != i)
		{
			Swap(arr, min, i);
		}
	}
}
