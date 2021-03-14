
void move(int arr[], int sz)
{
	int* left = arr;
	int* right = arr + sz - 1;

	while ((left < right))
	{
		while ((left < right) && (*left % 2 == 1)) //´Ó×ó±ßÕÒÅ¼Êý
		{
			left++;
		}
		while ((left < right) && *right % 2 == 0)//´Ó×ó±ßÕÒÆæÊý¡£
		{
			right--;
		}

		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}

void printf1(int arr[], int sz)
{
	int i;
	for (i = 0;i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	move(arr1, sz);

	printf1(arr1, sz);

	return 0;
}