class Solution {
public:
    // Recursive helper function to determine if we can reach the end from index 'i'
    bool hlo(vector<int>& nums, int i) {
        // Base case: if we are at or beyond the last index, return true
        if (i >= nums.size() - 1)
            return true;

        // Try all possible jumps from 1 to nums[i]
        bool p = false;
        for (int j = 1; j <= nums[i]; j++) {
            // Recursively check if we can reach the end from i + j
            p = p | hlo(nums, i + j);  // OR combines results of all possible jumps
        }

        // Return true if any of the recursive paths lead to the end
        return p;
    }

    // Main function to start the recursion from index 0
    bool canJump(vector<int>& nums) {
        // If only one element, we're already at the end
        if (nums.size() == 1)
            return true;

        // Start recursion from index 0
        return hlo(nums, 0);
    }
};
