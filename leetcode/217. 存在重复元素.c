int cmp(const void* _a, const void* _b) {
    int a = *(int*)_a, b = *(int*)_b;
    return a - b;
}

//先排序，再比较。如果两个相邻元素重复，让计数器增加。如果计数器不等于初值，就返回true。
bool containsDuplicate(int* nums, int numsSize){

    qsort(nums, numsSize, sizeof(int), cmp);
    
    int count = 0;

    int i;
    for(i=0;i<numsSize-1;i++)
    {   
        if(count == 1)
            return true;

        if(nums[i] == numjis[i+1])
        {
            count++;
        }
    }

     if(count == 1)
            return true;

    return false;
}
