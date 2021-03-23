#include <stdio.h>

int main()
{

	return;
}


int findMaxConsecutiveOnes(int* nums, int numsSize) {

	int max = 0;
	int sum = 0;

	int i;
	for (i = 0;i < numsSize;i++)
	{
		if (nums[i] == 1)
		{
			sum++;

			if (sum > max)
			{
				max = sum;
			}
		}
		else
		{
			sum = 0;
		}

	}


	return max;
}