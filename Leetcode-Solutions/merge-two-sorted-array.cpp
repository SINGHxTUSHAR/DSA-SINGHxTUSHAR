// Intuition:
// We have to merge two sorted array such that the final array is also sorted. nums1 has m elements & nums2 has n elements but size of nums1 is m+n while size of nums2 is n.
// Put the elements from nums2 to nums1 by using for loop and then sort the final array using STL function.

// Approach:
// * Design a for loop which will fetch the elements from nums2 and place them in nums1 at index strating from (m-1) which contains zero.
// * After placing each element make sure to update the counter(j) of nums1 {j++}.
// * Now, nums1 have all the elements but in unsorted order.
// * use sort() from STL to sort nums1

// Complexity:
// Time complexity:O(n)
// Since, we have only use a for loop its time complexity will be O(n).
// Space complexity:O(1)
// Since, we donot have used any extra space.

// Code:
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

// This for will put all the elements of nums2 into nums1 at the position of zeros which are after the size of nums1(atre index m-1).
        for(int i=0,j=m; i<n; i++){
            nums1[j]=nums2[i];
            //increment the counter of nums1
            j++;
        }
        //sort the nums1 using STL
        sort(nums1.begin(),nums1.end());
        
    }
};

link: https://leetcode.com/problems/merge-sorted-array/solutions/4576915/merge-sorted-arraycoptimised-approach/