/*Author: TUSHAR SINGH*/

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
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        // int n = nums.size();
        //     unordered_map<int,int>mpp;
        //     for(int i=0; i<n; i++){
        //         mpp[nums[i]]++;
        //     }

        //    for (int i = 0; i <= n; i++) {
        //         if (mpp[i] == 0) {
        //         return i;
        //         }
        //     }return -1;

        /*summation of total n - given sum of n ele*/
        //     int sum{0};
        //     for(int i=0; i<n; i++){
        //         sum+=nums[i];
        //     }return (n*(n+1)/2) - sum;

        /*since XOR : a^a=0, we will be left with resultant number*/
        int xor1{0}, xor2{0};

        for (int i = 0; i < n; i++)
        {

            xor1 ^= i; // XOR with 0 to n-1
            xor2 ^= nums[i];
        }
        xor1 = xor1 ^ n; // to complete the xor upto n
        return xor1 ^ xor2;
    }
};

// LINK: https://leetcode.com/problems/missing-number/solutions/4755873/missing-number-cpp-beats-98-detail-explanation-optimized
