/*Author: TUSHAR SINGH*/

// Intuition:
// * Check whether the future ele is large or not and also maintain a cnt var to check how many the past ele is greater than curr ele.
// * If the arr is sorted then this condition will only occur once.

// Approach:
// * Design a loop to iterate over the given arr.
// * Define a count var
// * Check how many times the past ele is greater than current ele and increment the cnt var as per this condition.
// * Also cover the edge case which is nums[n-1]>nums[0] cnt++;
// * Since we know that for a sorted arr , this condition will only occur once.
// * If cnt<=1 return true, else return false

// Complexity:
// Time complexity: O(n)
// Only traversing over the given arr.
// Space complexity: O(1)
// No extra auxiliary space is used.

// Code:
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt{};
        //rotated as well as sorted
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]) cnt++;
        }
        if(nums[nums.size()-1]>nums[0]) cnt++;

        return cnt<=1;
        
    }
};

//LINK: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/solutions/4788747/check-if-array-is-sorted-and-rotated-cpp-detail-explanation-betas-100