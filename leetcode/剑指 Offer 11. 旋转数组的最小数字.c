

//二分查找思想
int minArray(int* numbers, int numbersSize){


	int low = 0;
	int high = numbersSize - 1;

	//当第一个元素小于最后元素说明有序，直接返回
	//数组只有一个元素时直接返回
	if (numbers[low] < numbers[high] || low == high)
	{
		return numbers[low];
	}

	//当他们相邻的时候就停止
	while (low + 1 != high) {

		int pivot = low + (high - low) / 2;
		if (numbers[pivot] < numbers[high]) {
			high = pivot;
		}
		else if (numbers[pivot] > numbers[high]) {
			low = pivot;
		}
		else
		{
			high -= 1;
		}
	}

	return numbers[high];


}

