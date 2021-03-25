#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {

	if (numsSize == 0)
		return 0;

	//¶¨Òå×óÓÒÖ¸Õë¡£
	int* left = nums;
	int* right = nums + numsSize - 1;

	int count = 0;

	while (left < right)
	{
		while (*left != val && left < right)
		{
			left++;
			count++;
		}

		while (*right == val && left < right)
		{
			right--;
		}

		int tmp = *left;
		*left = *right;
		*right = tmp;
	}

	if (*left != val)
	{
		return count + 1;
	}

	return count;

}

int main()
{
	int arr[] = { 3,2,2,3 };

	int len = sizeof(arr) / sizeof(arr[1]);
	
	removeElement(arr, 4, 3);
	
	int i;
	for(i=0;i<4;)

	return;
}