#include <stdio.h>




int removeDuplicates(int* nums, int numsSize) {

    if (numsSize == 0) //����Ԫ��Ϊ0������0
        return 0;

    int prev = 0; //����ǰ��˫ָ��
    int cur = 1;
    int dst = 0;//��¼����

    while (cur < numsSize)
    {
        if (nums[prev] != nums[cur]) //�����ͬ����prev��ֵ��dst��dst��1.
        {
            nums[dst] = nums[prev];

            prev++;
            dst++;
            cur++;
        }
        else //���ǰ����������ͬ������Ѱ�ң�ֱ����ͬ��
        {
            prev++;
            cur++;
        }
    }

    //ѭ��������prevָ��ָ�����һ��Ԫ�أ���ֵ��dst
    nums[dst] = nums[prev];

    dst++; //dst��0��ʼ���������鳤��Ϊdst+1
        
    return dst;//�������������鳤��
}


int main()
{

	return;
}