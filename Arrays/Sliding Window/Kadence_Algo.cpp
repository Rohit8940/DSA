// Maximum sum subarray with negative numbers

// Kadane’s is like resetting when things go bad:

// If the running sum (curr) becomes worse than starting fresh, we restart at the current element.

// Otherwise, we keep extending.

// That’s why it runs in O(n) time, O(1) space 🚀

#include <bits/stdc++.h>
using namespace std;

pair<int, pair<int,int>> maxSubArray(vector<int>& nums) {
    int n = nums.size();

    int curr = nums[0];
    int maxi = nums[0];

    int start = 0;       // current subarray start
    int ansStart = 0;    // final answer start
    int ansEnd = 0;      // final answer end

    for (int i = 1; i < n; i++) {
        if (nums[i] > curr + nums[i]) {
            curr = nums[i];
            start = i;   // new subarray starts here
        } else {
            curr = curr + nums[i];
        }

        if (curr > maxi) {
            maxi = curr;
            ansStart = start;      //for maxi ans we keep track of start of subarray
            ansEnd = i;
        }
    }

    return {maxi, {ansStart, ansEnd}};
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    auto result = maxSubArray(nums);
    int maxSum = result.first;
    int start = result.second.first;
    int end = result.second.second;

    cout << "Maximum Subarray Sum = " << maxSum << endl;
    cout << "Subarray = [ ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
}

// to keep track of the maximum sum only

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr = nums[0];     // max sum ending at current index
        int maxi = nums[0];     // global max

        for (int i = 1; i < n; i++) {
            // Either extend previous subarray or start new from nums[i]
            curr = max(nums[i], curr + nums[i]);

            // Update global max
            maxi = max(maxi, curr);
        }

        return maxi;
    }
};
