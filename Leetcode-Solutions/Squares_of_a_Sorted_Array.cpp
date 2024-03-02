/*Author: TUSHAR SINGH*/

// Intuition:
// * If we are solving this by using the brute force then,
//    * We will simply square the ele of nums and then simply sort the nums.
// * If we are using the two pointer approach then,
//    * We will compare the absolute value and push the square of largest ele at the correct position in ans vector.

// Approach:

// Approach-1: Brute-Force
// * Simply square the ele in nums.
// * Sort the given nums arr using the sort fun of STL.
// * Return the nums vector.

// Approach-2: Two-Pointer
// * Create a vector to store the ans
// * Use two pointer left(l)=0 and right(r)=n-1.
// * Iterate over the give arr from the last and check the absolute val of arr[left] & arr[right].
// * Push the larger val at the correct pos in ans vec.
// * Return the ans vector.

// Complexity:
// Time complexity:
// Approach-1:Brute force - O(nlogn)
// Approach-2:Two-Pointer- O(n)

// Space complexity:
// Approach-1:Brute force - O(logn)
// Approach-2:Two-Pointer - O(n)

//NOTE: TWO APPROACHES HAVE BEEN DISCUSSED, CMT OUT ONE.

// Code:
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        /*Approach-1 || T.C = O(nlogn) & S.C = O(logn)*/ 
        /*BRUTE-FORCE*/
        int n = nums.size();
        
        //squaring each element in the nums
        for(int i=0; i<n; i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());

        return nums; 

        /*Approach-2 || T.C = O(n) & S.C = O(n)*/
        /*TWO-POINTER*/
        int n = nums.size() , l = 0 , r = n-1;
        vector<int>ans(n);
        
        for(int i=n-1; i>=0; i--){
            int val{};
            //comparing their absolute val
            if(abs(nums[l])<abs(nums[r])){
                val = nums[r];
                r--;
            }else{
                val = nums[l];
                l++;
            } ans[i] = val * val;
        }return ans;
    }
};

//LINK: https://leetcode.com/problems/squares-of-a-sorted-array/solutions/4809526/squares-of-a-sorted-array-cpp-detail-explanation-optimal
