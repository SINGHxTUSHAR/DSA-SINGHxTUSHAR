// Intuition: 
// * We will use TWO-POINTER, one is initialize to 0 another with 1.
// * If the ele of 1st pointer is not same as ele of 2nd pointer then we will simply replace it.

// Approach:
// * Using Two-Pointer approach
// * Define 1st pointer to 0 and 2nd to index 1 and traverse upto n
// * If the ele of 2nd ptr is not same as ele of 1st ptr { arr[i] != arr[j] }.
// * Then arr[i] = arr[j] , assign the unique val in place of duplicate and also increment the 1st ptr.
// * return the index upto which we have unique ele or directly return unique ele.

// Complexity:
// Time complexity: O(n)
// Since we have to traverse n ele in arr.
// Space complexity: O(1)
// No extra auxiliary space is used.

// Code:
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //USING TWO-POINTER APPROACH
        int n = nums.size();
        int i = 0;
        for (int j = 1; j < n; j++) {
            //if the ele are not same then change te=he value
           if (nums[i] != nums[j]) {
              i++;
              nums[i] = nums[j];
            }
        }return i + 1;    
    }
};

//LINK: https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/4790324/remove-duplicates-from-sorted-array-cpp-detail-explanation-beats-100-optimal