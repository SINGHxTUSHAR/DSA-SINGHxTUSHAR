/*Author: TUSHAR SINGH*/

// Intuition:
// * Since we already know how many sub-array will be created we can use this information. As nums.size()/3 = total sub-arrays.
// * We will sort the array, So that elements which are close to each other will come close to each other which will help us to find the exact elements.

// Approach:
// * create a 2d vector to store the answer.
// * Sort the given array(nums) so that the elements come close to each other which help us to iterate and select the required elements for sub-array.
// * Design a loop starting from '2' index till the last of array with an increment of '2'. Since we know we need exactly 3 elements in a sub-aaray.
// * If the difference between the current element and the prev->prev element is less than or equal to 'k'.
// * Then select the all three elements which are {nums[i],nums[i-1],nums[i-2]} by pushing the into the ans vector.
// * Else return an empty 2d vector.

// Complexity:
// Time complexity: O(n)
// Since traverseing from all the elements
// Space complexity: O(n)
// Since we are pushing elements in 2d vector.

// Code:
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        //2d vector to store the answer
        vector<vector<int>> ans;
        //sort the given arr
        sort(nums.begin(),nums.end());

        for(int i=2; i<nums.size(); i=i+3){
            //checking the condition
            if(nums[i]-nums[i-2]<=k){
                ans.push_back({nums[i],nums[i-1],nums[i-2]});
            }
            else{
                return {};
            }
        } return ans;
        
    }
};

//LINK: https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/solutions/4659873/divide-arr-into-subarray-cpp-beats-98-most-optimized