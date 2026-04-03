// Problem: Maximum Subarray
// Link: https://leetcode.com/problems/maximum-subarray/
// Intuition: If current sum becomes negative, reset it to 0
// Approach: Kadane’s Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            maxSum = max(maxSum, currentSum);

            if(currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;
    }
};
