//optimized approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        int right = 1;
        int uniqueindex = 1;
        while(right < nums.size()){
            if(nums[right] != nums[right-1]){
                nums[uniqueindex] = nums[right];
                uniqueindex++;
            }
            right++;
        }
        return uniqueindex;
    }
};