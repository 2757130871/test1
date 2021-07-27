
//逆序数组元素
void reverse(int*nums,int start,int end)
{
    if(!nums)
        return;

    while(start < end)
    {   
        int tmp = nums[start];

        nums[start] = nums[end];
        nums[end] = tmp;
        start++;
        end--;
    }
}

//三步逆序
// nums = {1,2,3,4,5,6,7} k = 3 numSize = 7
//第一步，前n-k个逆序：
//4 3 2 1 5 6 7
//第二步，剩下的逆序
//4 3 2 1 7 6 5 
//整体逆序
//5 6 7 1 2 3 4

void rotate(int* nums, int numsSize, int k){

    k%=numsSize;
    reverse(nums,0, numsSize - k - 1);
    reverse(nums,numsSize - k,numsSize - 1);
    reverse(nums,0,numsSize - 1);
}

//
