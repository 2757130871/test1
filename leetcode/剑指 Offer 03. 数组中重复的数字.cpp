
//Ô­µØÌæ»» 
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
