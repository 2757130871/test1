#include <stdio.h>



void reverse(int* nums, int left, int right)
{

	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}

}
/// <summary>
/// ��������
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <param name="k"></param>
void rotate(int* nums, int numsSize, int k) {

	//k���ܴ��������С�����%=0��������ת�󲻱䣬ֻ��������ת����ʡ���ܡ�
	k %= numsSize;

	reverse(nums, 0, 0 + (numsSize - k) - 1);
	reverse(nums, (numsSize - k), numsSize - 1);
	reverse(nums, 0, numsSize - 1);

}

int main()
{

	return;
}