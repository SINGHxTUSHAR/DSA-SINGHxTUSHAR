// Intuition:
// * Iterater over the given array and perform the required action and check on every step , where the ant is standing.
// * If ant is at boundary which is the starting position of array, then increment the count which denotes the number of times ant is at boundary.

// Approach:
// * Iterate over the array and perform the task which is to move at the position which is equivalent to element of array.
// * check whether is ant standing on boundary or not.
// * If sum is zero then, ant is on boundary then increment the count var by 1.
// * If sum is positive that means, ant is moving in right direction.
// * If sum is negative that means, ant is moving in left direction.

// Complexity:
// Time complexity:O(n)
// Iterating over the array which contains n elements.

// Space complexity:O(1)
// Constant auxiliary space is used.

// Code:
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum{},count{};
        //iterating over the nums.
        for(int i=0; i<nums.size(); i++){
            //performing certain operations.
            sum = sum + nums[i];
            //sum==0 means ant at boundary.
            if(sum==0) count++;
        }return count;
    }
};

//LINK: https://leetcode.com/problems/ant-on-the-boundary/solutions/4675435/ant-on-the-boundary-beats-95-detail-explanation