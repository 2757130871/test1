/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//���ⲻ�ÿ��Ǵ������⡣������������
//������������������

int* printNumbers(int n, int* returnSize) {

    *returnSize = 1;
    int i;
    for (i = 0;i < n;i++)
    {
        *returnSize *= 10;
    }

    *returnSize -= 1;
    int* retArr = (int*)malloc(sizeof(int) * (*returnSize));

    for (i = 1;i <= *returnSize;i++)
    {
        retArr[i - 1] = i;
    }

    return retArr;
}