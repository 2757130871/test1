#include <stdio.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {

	int kbit = 0;
	int Knum = K;
	//ȷ��K��λ��
	while (Knum)
	{
		kbit++;
		kbit /= 10;
	}



	int newArrLen = ASize > kbit ? ASize : kbit;

	//ȷ��������ռ䡣
	int* newArr = malloc(sizeof(int) * (newArrLen + 1));

	int addbit = 0;
	int Astart = ASize - 1;

	int bitSum = 0;

	int AstartTmp = 0;
	int newArrLenStart = 0;


	while (newArrLen--)
	{
		if (Astart >= 0) //��A�ĳ���С��K����ע��Խ��
		{
			AstartTmp = A[Astart];
			Astart--;
		}
		else
		{
			AstartTmp = 0;
		}

		//��ȡͬλ���
		bitSum = AstartTmp + K % 10 + addbit;
		K /= 10;

		if (bitSum > 9) //����9�ͽ�λ
		{
			addbit = 1;
			bitSum -= 10;
		}
		else
		{
			addbit = 0; 
		}

		newArr[newArrLenStart] = bitSum;
		newArrLenStart++;
	}

	*returnSize = newArrLen;

	return newArr;
}



int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{

	int Ksize = 0;

	int knum = K;
	while (Knum)
	{
		++Ksize;
		Knum /= 10;
	}

	int len = Asize > Ksize ? ASize : KSize;
	int* retArr = (int*)malloc(sizeof(int) * (len + 1));

	int ret = a + a + K / 10 + nextNum;
	K /= 10;

	if (ret > 9)
	{
		ret -= 10;
		nextNum = 1;
	}
	else
	{
		nextNum = 0;
	}

	retArr[reti] = ret;
	++reti;


	if (nextNum == 1)
	{
		retArr[reti] = i;
		++reti;

	}

	int left = 0, right = reti - 1;
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;

		++left;
		++right;
	}

	*returnSize = reti;
	return retArr;

}

int main()
{
	int sum = 0;



	return;
}
