int removeElement(int* nums, int numsSize, int val){

   /* if(nums == NULL)   return 0;

    int front = 0;
    int rear = numsSize - 1;

    while(front < rear)
    {
            while(front < rear && nums[front] != val)
                front++;

            while(front < rear && nums[rear] == val)
                rear--;

            if(front < rear)
            {
               int tmp =  nums[front];
               nums[front] = nums[rear];
               nums[rear] = tmp;
            }
    }

    int n = numsSize - 1;
    int ret = 0;
    while(nums[n] == val)
    {
        ret++;
        n--;
    }

    return  numsSize - ret; */

    if(!nums)   return 0;

    int src = 0;
    int dest = 0;

    while(src < numsSize)
    {
        if(nums[src] == val)
        {
            src++;
        }
        else
        {   
            
            nums[dest] = nums[src];
            src++;
            dest++; 
        }
    }

    
    return dest;
}
