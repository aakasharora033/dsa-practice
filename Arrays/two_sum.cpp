// Problem: Two Sum
// Link: https://leetcode.com/problems/two-sum/
// Approach: Hashmap to store complement
// Time Complexity: O(n)
// Space Complexity: O(n)


// Intuition: For each element, check if its complement already exists in hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
      
        for(int i=0; i<nums.size(); i++){
            int complement = target-nums[i];
          
            if(mp.find(complement)!=mp.end()){
                return {mp[complement],i};
            }
            mp[nums[i]] = i;
        }
        return{};   
    }
};
