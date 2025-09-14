//optimized approach
class Solution {
public:
   
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
         int ans = nums[0]+nums[1]+nums[2];
        for(int i = 0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
           

            while(j<k){
                int currentsum = nums[i] + nums[j] + nums[k];
                if(abs(currentsum -target)< abs(ans-target)  )
                {
                    ans = currentsum;
                }
                if(currentsum > target){
                    k--;
                }
                else {
                    j++;
                }

            }
        }
        return ans;
    }
};