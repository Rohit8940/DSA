//optimized approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin(),nums.end());
        vector<int> arr(-1);
        while(left < right){
            if((nums[left] + nums[right]) < target){
                left++;
            }
            else if(nums[left]+nums[right] > target){
                right--;
            }
            else{
                arr.push_back(left);
                arr.push_back(right);
            }
        }
        return arr;
    }
};

//brute force approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int count  = 0;
      vector<int> ans;

      for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[j] + nums[i] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
      }
      return ans;
    }
};