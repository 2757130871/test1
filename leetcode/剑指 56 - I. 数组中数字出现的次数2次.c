int* singleNumbers(int* nums, int numsSize, int* returnSize){

    int ret=0;
    int i =0;
    
    //保存单独出现的数异或在一起的值
    for(i=0;i<numsSize;i++)
    {
        ret^=nums[i];
    }

    int m=0;
    //从低向高位找到ret中第m位为1的位置, 为1代表异或在一起的两个数不相同。
    while(m<32)
    {
        if(ret & (1<<m))
        {
            break;
        }
        else
        {
            m++;
        }
    }

    int x = 0;
    int y = 0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i] & (1<<m))
        {
            x^=nums[i];
        }
        else
        {
            y^=nums[i];
        }
    }

    int* retArr = malloc(2* sizeof(int));

    retArr[0]=x;
    retArr[1]=y;
    *returnSize = 2; 

    return retArr;
}
