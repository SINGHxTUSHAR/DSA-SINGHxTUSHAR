class Solution {
public:
    long long maxScore(vector<int>& a, vector<int>& b) {
        int n = b.size();
        
        // We need to maintain maximum scores for 4 steps.
        // Initially, the maximum score before selecting any element is 0.
        vector<long long> dp(5, LLONG_MIN);
        dp[0] = 0;  // The score for selecting 0 elements is 0.

        // Now we iterate over all elements of b and try to update dp.
        for (int i = 0; i < n; ++i) {
            // We update dp in reverse to avoid overwriting previous steps.
            for (int k = 4; k > 0; --k) {
                // Update the dp for choosing k elements by adding b[i] * a[k-1]
                if (dp[k-1] != LLONG_MIN) {
                    dp[k] = max(dp[k], dp[k-1] + (long long)a[k-1] * b[i]);
                }
            }
        }
        
        // The result will be stored in dp[4], which represents selecting 4 elements.
        return dp[4];
    }
};
