/*Author: TUSHAR SINGH*/
// Intuition:
// We have to move the zeros without creating an extra array.
//  So we will create a temp variable which will be used to store the location of the next element while the 'i' counter will be used to locate non-zero (TWO-POINTER Approach).

// Approach:
// * Create a temp var to store the location of next element{temp=0}.
// * Design a loop to iterate over the give array.
// * If we found non-zero element in array then swap with the zero which is at the position of nums of temp.
// * After swapping increment the temp var by 1.
// * Repeat these steps until the complete array is iterated.

// Complexity:
// * Time complexity: O(n)
//   - Since , we are only iterating a for loop with n elements and using STL for swapping , its time complexity will be O(n).
// * Space complexity: O(1)
//   - Only temp var is using a constant auxiliary space which will have constant complexity.

// Code:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // a var to store the position of next element
        int temp = 0;
        //loop to iterate over the given array
        for(int i=0; i<nums.size(); i++){
            //selecting non-zero elements
            if(nums[i] != 0){
                //swapping non-zero with zeros
                swap(nums[i],nums[temp]);
                temp++;
            }
        }
        
    }
};

// link: https://leetcode.com/problems/move-zeroes/solutions/4593571/move-zerostwo-pointer-approachbeginner-friendlyc/