
//时间复杂度：O(1)
//空间复杂度：O(M+N)
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    if(!nums1 || !nums2) 
        return;

    int n1 = m - 1;
    int n2 = n - 1;
    int ret = m + n - 1;

    while((n1 >= 0) && (n2 >= 0))
    {
        if(nums1[n1] <= nums2[n2])
            nums1[ret--] = nums2[n2--];
        else
            nums1[ret--] = nums1[n1--];
    }
  
    if(n2 >= 0)
        while(n2 >= 0) 
            nums1[ret--] = nums2[n2--]; 
}


