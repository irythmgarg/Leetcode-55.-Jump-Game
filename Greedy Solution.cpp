class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind = 0;  // max reachable index so far
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxind) {
                // If we're at a position we can't reach, return false
                return false;
            }
            // Update the maximum index we can reach
            maxind = max(maxind, nums[i] + i);

            // If we can reach or pass the last index, return true
            if (maxind >= nums.size() - 1)
                return true;
        }
        return true;  // We've gone through all indices safely
    }
};
