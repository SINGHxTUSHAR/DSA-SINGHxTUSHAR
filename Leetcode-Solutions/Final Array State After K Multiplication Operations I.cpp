class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while (k--) {
        // Find the index of the minimum element
        auto minIt = min_element(nums.begin(), nums.end());
        
        // Multiply the minimum element by the multiplier
        *minIt *= multiplier;
    }
        return nums;
    }
};