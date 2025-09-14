#include<iostream>
using namespace std;

int maxSum(vector<int> nums,int k){
    int count = 0;
    int maxi = INT_MIN;
    int left = 0;
    int right = 0;
    int n = nums.size();
    while(right < n){
        count += nums[right];

        while(left <= right && count >= k){
            count -= nums[left];
            left++;
        }
        maxi = max(maxi,count);
        right++;
    }
    return maxi == INT_MIN ? 0 : maxi;
}
int main(){
}