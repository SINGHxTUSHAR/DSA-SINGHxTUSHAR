/*Author: TUSHAR SINGH*/

// Intuition:
// We will use TWO-POINTER approach, traverse in nums arr and if ele is same return else update. If nums is traversed and no ele is equal then return -1.

// Approach:
// * Place i and j at the starting pos of nums1 and nums2.
// * Traverse in nums arr while both i < nums1.size() & j < nums2.size().
// * Update the pointer whose curr value is less
// * If the value of i and j in nums are equal then return nums1[i].
// * Else return -1.

// Complexity:
// Time complexity: O(min(m , n))
// Let suppose that n and m are the size of nums1 and nums2 resp.
// Space complexity: O(1)
// No extra auxiliary space is used.

// Code:
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        /*using set or hash-map || T.C = O(n) & S.C = O(n)*/
        unordered_set<int> set1(nums1.begin(), nums1.end());
        for(auto ele : nums2){
            if(set1.contains(ele)) return ele;
        }return -1; 
        /****************************************************************************/

        /*TWO-POINTER APPROACH || T.C = O(n) & S.C = O(1)*/
        int i{}, j{};
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else return nums1[i];
        }return -1;
    }
};

//LINK: https://leetcode.com/problems/minimum-common-value/solutions/4846650/minimum-common-value-c-detail-explanation-optimal-cpp