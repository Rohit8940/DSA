class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            int temp = nums[i];
            if(temp<0){
                nums.push_back(temp*temp);
                nums.erase(nums.begin() + i);
            }
            nums[i] = temp*temp;
        }
        return nums;
    }
};