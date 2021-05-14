
void Sort(int arr[], int len)
{
	int flag = 0; //优化，如果数组已经有序停止比较。
	int i;
	for (i = 0;i < len - 1;i++)
	{
		int j;
		flag = 0;
		for (j = 0;j < len - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 1;
			}

		}
		if (flag == 0)	break;
	}
}
