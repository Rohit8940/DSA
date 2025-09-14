//Optimized approach

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size()-2;i++){
            if(i > 0 && nums[i-1]==nums[i]){
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if( j<k && nums[i] + nums[j] + nums[k]==0){
                    
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                     while (j < k && nums[j] == nums[j - 1]) j++;
                    
                    // Skip duplicates for the third number
                    while (j < k && nums[k] == nums[k + 1]) k--;
                    
                }
                else if(j<k && nums[i]+nums[j]+nums[k] <0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};


//using hash map

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> map;
        set<vector<int>> se;

        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                int compliment = -nums[i] -nums[j];

                if(map.find(compliment)!=map.end()){
                    se.push_back({i,j,map[compliment]});
                }
            }
            map[nums[j]]=j;
        }
    }
};