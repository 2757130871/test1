#include <stdio.h>

// µœ÷√∞≈›≈≈–Ú
void Sort(int arr[], int len)
{
	int i;
	for (i = 0;i < len - 1;i++)
	{
		int j;
		for (j = 0;j < len - 1 - i;j++)
		{

			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}

		}

	}

}

int main()
{
	int arr[] = { 11,55,33,22,77,54,89,6 };
	int len = sizeof(arr) / sizeof(arr[1]);

	Sort(arr, len);

	int i;
	for (i = 0;i < len;i++)
	{
		printf("arr[%d]=%d   ", i, arr[i]);
	}

	return 0;
}