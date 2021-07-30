
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



//借助第三方数组
//空间复杂度：O(M+N)
//时间复杂度：O(M+N)
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    int n1 = 0;
    int n2 = 0;

    int *ret = (int*)malloc(sizeof(int) * (m + n));
    int i = 0;

    while(n1 < m && n2 < n)
    {
        if(nums1[n1] < nums2[n2])
            ret[i++] = nums1[n1++];
        else
            ret[i++] = nums2[n2++];
    }

    while(n1 < m)
        ret[i++] = nums1[n1++];
    
     while(n2 < n)
        ret[i++] = nums2[n2++];

    memmove(nums1,ret,sizeof(int) * (m + n));
    free(ret);
}
