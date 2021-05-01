
//原地替换
//一个萝卜一个坑思想
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {

        int temp;
        int size = nums.size();
        for(int i=0;i<size;i++){
            while (nums[i]!=i){
                if(nums[i]==nums[nums[i]]){
                    return nums[i];
                }
                temp=nums[i];
                nums[i]=nums[temp];
                nums[temp]=temp;
            }
        }
        return -1;

    }
};



//使用键值对 需要花费O(N)的空间   Java实现 

class Solution {
    public int findRepeatNumber(int[] nums) {

        Set<Integer> set = new HashSet<>();
        for(int n : nums)
        {
            if(set.contains(n)) return n;
            set.add(n);        
        }

        return -1;
    }
} 
