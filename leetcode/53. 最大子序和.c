#include <stdio.h>

//暴力解法 遍历数组 得到所有子序列，比较得到最大的那一个。
int maxSubArray(int* nums, int numsSize){
    int max =nums[0];//之前是0,为了防止第一位是负数max没法比较不输出设为数组第一个数
    for (int i=0; i<numsSize; i++) {   
        int n=0;//重置n,n代表一次搜寻中ni到nx的和
        for (int x=i; x<numsSize; x++) {
            n=n+nums[x];//n叠加nums[x]
            if (n>max) {
                max=n;//取最大的值
            }
        }
    }
    return max;
}




int maxSubArray(int* nums, int numsSize) {
    int pre = 0, maxAns = nums[0];
    for (int i = 0; i < numsSize; i++) {
        pre = fmax(pre + nums[i], nums[i]);
        maxAns = fmax(maxAns, pre);
    }
    return maxAns;
}


//时间复杂度：O(n)O(n)，
///空间复杂度：O(1)O(1)。

int main()
{

	return;
}
