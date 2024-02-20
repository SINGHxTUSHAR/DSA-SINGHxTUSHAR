// Intuition:
// Range will be 0 to nums.size(). Calculate the total sum as per range and subtract it with current sum of nums, which will return the number which is not present in nums as each ele in nums is unique.

// Approach:
// * Calculate the range as the lower limit will be 0 always and upper limit will be nums.size();
// * Calculate the Total_sum of n nums in range by n*(n+1)/2
// * Calculate the current sum of nums.
// * Subtract the Total_sum with current sum which will return the ele which is not present in nums.

// Complexity:
// Time complexity: O(n)
// Since to calculate the sum of n ele in nums arr.
// Space complexity: O(1)
// No auxiliary space is used.

// Code:
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        //sum as per range
        int totalSum = (n*(n+1))/2;
        //number which is not present in nums as per range
        return totalSum - accumulate(nums.begin(),nums.end(),0);       
    }
};

//LINK: https://leetcode.com/problems/missing-number/solutions/4755873/missing-number-cpp-beats-98-detail-explanation-optimized