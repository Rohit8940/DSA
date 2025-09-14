//brute force approach

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<intervals.size();i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(!vec.empty() && vec.back()[1] >= end){
                    continue;
                }
            for(int j = i+1;j<intervals.size();j++){

                
                if(intervals[j][0] <= end ){
                    end = max(end,intervals[j][1]);
                }
                    
                
            }
            vec.push_back({start,end});
        }
        return vec;
    }
};