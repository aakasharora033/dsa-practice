// Problem: Frog Jump (LC Hard)
// Link: https://leetcode.com/problems/frog-jump/
// Intuition: Track reachable states using (stone, last jump)
// Approach: DP + Memoization + Hashing
// Time Complexity: Exponential → optimized using DP
// Space Complexity: O(n^2)

bool solve(vector<int>& stones, int currentIndex, int lastJump){
    if(currentIndex == n-1) return true;

    if(t[currentIndex][lastJump] != -1){
        return t[currentIndex][lastJump];
    }

    for(int nextJump = lastJump-1; nextJump <= lastJump+1; nextJump++){
        if(nextJump > 0){
            int nextStone = stones[currentIndex] + nextJump;

            if(mp.find(nextStone) != mp.end()){
                if(solve(stones, mp[nextStone], nextJump)){
                    return t[currentIndex][lastJump] = true;
                }
            }
        }
    }

    return t[currentIndex][lastJump] = false;
}
