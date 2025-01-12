// we will use kadane's algorithm to counter this solution

#include<vector>

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int max = arr[0];
        int sum = 0;
        
        for(int i = 0;i<arr.size();i++){
            sum = arr[i];
            if(arr[i]>max){
                max = arr[i];
            }
            for(int j = i+1;j<arr.size();j++){
                sum = sum + arr[j];
                if(sum>max){
                    max = sum;
                }
            }
        }
        return max;
    }
};