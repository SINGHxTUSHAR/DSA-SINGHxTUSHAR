/*Author: TUSHAR SINGH*/

// Intuition:
// * Majority element is the element whose frequency is highest. We simply calculate the frequency and return the element.
// * Also we can sort and return the nums[n/2].

// Approach: 

// * `Method-1` -> using sort fun of STL:
// * calculate the size of arr
// * sort the given arr by using sort in STL 
// * Since we know that the majority ele will be greater than n/2 simply return nums[n/2].

// * `Method-2` -> using unordered_map:
// * Design a unordered_map to calculate the frequency of ele in nums.
// * Return the ele with frequency greater than n/2.

// Complexity:
// Time complexity: O(n)
// Since sort fun in STL takes O(n) time to sort the given arr.
// Space complexity: O(k)
// k is the number of element which are stored in unorderd_map.

// Code:
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        /* Method-1 || T.C = o(n) due to sort using STL*/
        //calculating the size for the nums
        int n = nums.size();

        //sorting the given array nums
        sort(nums.begin(), nums.end());
        
        //if the majority element exists more than n/2 times than it is surely the middle element
        return nums[n/2];



        /*****************************************************************************************************/


        /*Method-2* || S.C = O(k) due to k ele in unordered_map*/
        unordered_map<int, int> mpp; 
        int n = nums.size() / 2; 

        //pre-computed
        for (auto ele : nums) {
            mpp[ele]++;
        }

        int ans {};
        //fetching - as per condition
        for (auto ele : mpp) {
            if (ele.second > n) {
                ans = ele.first; 
            }
        }
        
        return ans; 
    }
};

//LINK: https://leetcode.com/problems/majority-element/solutions/4717211/majority-element-cpp-detailed-explanation-optimized