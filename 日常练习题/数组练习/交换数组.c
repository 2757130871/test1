
void reverseArr(int arr1[], int arr2[], int size)
{
	int i;
	for (i = 0;i < size;i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main()
{
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 11,22,33,44 };

	int sz = sizeof(arr1) / sizeof(arr2[1]);

	reverseArr(arr1, arr2, sz);

	print(arr1, sz);
	printf("\n");
	print(arr2, sz);

	return 0;
}