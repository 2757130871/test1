

//���ö��ֲ���

int findMin(int* nums, int numsSize) {

	int low = 0;
	int high = numsSize - 1;

	//����һ��Ԫ��С�����Ԫ��˵������ֱ�ӷ���
	//����ֻ��һ��Ԫ��ʱֱ�ӷ���
	if (nums[low] < nums[high] || low == high)
	{
		return nums[low];
	}

	//
	while (low + 1 != high) {

		int pivot = low + (high - low) / 2;
		if (nums[pivot] < nums[high]) {
			high = pivot;
		}
		else if (nums[pivot] > nums[high]) {
			low = pivot;
		}
		else
		{
			high -= 1;
		}
	}

	return nums[high];
}


