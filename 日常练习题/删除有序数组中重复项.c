
//设置前后指针，记录其值
//

int removeDuplicates(int* nums, int numsSize){

    
    if(!nums || numsSize == 0)  return 0;
    if(numsSize == 1)   return 1; //只有一个数，直接返回
    
    int front = 1;
    int rear = 0;
    int ret = 0;

    int i = 0;
    
    while(front < numsSize)
    {
        //当前后指针不同时，rear指向的值为最后一个出现的
        if(nums[rear] != nums[front])
        {
            nums[ret] = nums[rear];
            ret++;
        }
        rear++;
        front++;
    }
    //当循环结束，ret依旧为0.说明数组中数组全相同，直接返回1。
    if(ret == 0)    return 1;

    //当循环结束，rear指向的数与ret指向的数不相同，rear指向的数为单独数
    if(nums[ret] != nums[rear])
        nums[ret] = nums[rear];
    
    
    return ret + 1;

}
