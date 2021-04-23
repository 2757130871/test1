void init(int arr[], int size)
{
	int i;
	for (i = 0;i < size;i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int size)
{
	int i;
	for (i = 0;i < size;i++)
	{
		printf("%d ", arr[i]);
	}
}
//
//void reverseArr(int arr[], int size)
//{
//	int left = 0;
//	int right = size - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//}