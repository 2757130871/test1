
//条件为0到n个数，其中缺一个。
//得到完整的连续序列和减去缺少的序列和就得出缺少数。

int missingNumber(int* nums, int numsSize){

    int tmp = numsSize;
    int sum1 = 0;
    int sum2 = 0;
    int i;
    for(i=0;i<numsSize;i++)
    {
        sum1 += i;
        sum2 += nums[i];
    }
    
    return sum1 + i - sum2;
}

//异或法

//利用异或的特性：
//0 异或任何数等于本身
//相同数异或等于0


int missingNumber(int* nums, int numsSize){

    int  x = 0;
    int i;
    for(i=0;i<numsSize;i++)
    {
       x  ^= i;
       x^= nums[i];
    }

    return x^i;
}
