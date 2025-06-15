class Solution {
public:
    int dp[10001];  // Memoization array to store results of subproblems

    // Recursive function to determine if we can reach the end from index 'i'
    bool hlo(vector<int>& nums, int i) {
        // Base case: if we are at or beyond the last index, return true
        if (i >= nums.size() - 1)
            return true;

        // If the result for this index is already computed, return it
        if (dp[i] != -1)
            return dp[i];

        bool p = false;

        // Try all possible jumps from 1 to nums[i]
        for (int j = 1; j <= nums[i]; j++) {
            // Recursively check if we can reach the end from index i + j
            p = p | hlo(nums, i + j);
            if(p) // if true found from anypath return truee;
          return true;

            // Early exit: if we already found a valid path, no need to continue
            if (p) break;
        }

        // Store the result in dp[i] and return it
        return dp[i] = p;
    }

    // Main function to check if the last index is reachable from the first index
    bool canJump(vector<int>& nums) {
        // Edge case: if there's only one element, we're already at the end
        if (nums.size() == 1)
            return true;

        // Initialize memoization array with -1 (meaning unvisited)
        memset(dp, -1, sizeof(dp));

        // Start recursion from index 0
        return hlo(nums, 0);
    }
};
