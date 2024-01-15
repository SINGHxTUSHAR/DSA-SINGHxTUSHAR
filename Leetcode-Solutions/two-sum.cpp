// Intuition:
// In this problem statement we have given an array and an target value. We have to return the indices of those elements whose sum is equal to the target value.
// I have solved this problem by using the brut force method which is beginner friendly but have Time Complexity of O(n^2).

// Approach:
// We will use Brut Force.

// * Design a loop which will fetch the first element from the array.
// * Use Nested loop to fetch another element but its index should be i+1 which means it will get the next element of the first element.
// * If sum of selected elements are equal to target value, then return their indices else return 0.
// * The above approach uses brut force with the concept of sliding window.

// Complexity:

// Time complexity: O(n^2)
// Since we have used nested for loop , its T.C = O(n^2)

// Space complexity: O(1)
// Since we have not use any additional space its S.C = O(1)

// Code:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //using for loop to get the first element
        for(int i=0; i<nums.size(); i++){
            //using this for to get the second element from the sliding window
            for(int j=i+1; j<nums.size(); j++){
                //if the sum of selected elements equal to target then return index
                if(nums[i] + nums[j] == target){
                    return{i,j};
                }
            }
        }
        // if not, then return 0
        return{0,0};
    }
    
};