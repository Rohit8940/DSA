#include<iostream>
using namespace std;

int maxSubArray(vector<int>& nums int k) {

    int maxi = INT_MIN;
    int curr = nums[0];
    int start = nums[0];
    int ansStart = 0;
    int ansEnd = 0;

    for(int i = 1;i<nums.size();i++){
        if(nums[i] > curr + nums[i]){
            curr = nums[i];
            start = i;
        }
        else{
            curr += nums[i];
        }
        if(curr > maxi){
            maxi = curr;
            ansStart = start;
            ansEnd = i;
        }

    }
    return ansStart - ansEnd;
}
int main(){
}
