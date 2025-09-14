#include<iostream>
using namespace std;

int negativeMaxSum(vector<int> nums,int k){
    unordered_map<int,int> map;
    int sum = 0;
    int maxi = INT_MIN;
    int right = 0;
    int n = nums.size();
    for(int i =0;i<n;i++){
        sum += nums[i];

        // nums = {2, 1, -1, 3}, k = 2

// i = 0 → sum = 2
// ✅ Entire subarray [0..0] already has sum = 2
// → length = 1

// If we don’t check if (sum == k), we’ll miss subarrays starting at
//  index 0, because prefix map only tracks sums at earlier indices.

        if(sum == k){
            maxi = i + 1;
        }
        if(map.find(sum-k)!=map.end()){
            maxi = max(maxi,i - map[sum-k]);
        }
        if(map.find(sum)==map.end()){
            map[sum] = i;
        }
    }
    return maxi == INT_MIN ? 0 : maxi;
}
int main(){
}







