/*Author: TUSHAR SINGH*/

// Intuition:
// Calculate the freq of ele in nums arr, return the maximum freq and if two ele have same freq then sum up their freq and return.

// Approach:
// * Declare currFreq, maxFreq, sumFreq variable which will store the current freq of ele, maximum freq of ele, and total freq or ans resp.
// * Traverse in nums arr, update the freq of ele.
// * Simultaneously update the current freq , and if currFreq > maxFreq, update the maxFreq and sumFreq.
// * And if the currFreq is equal to the maxFreq, simply add the currFreq in sumFreq.
// * Return the sumFreq, which has total freq of ele in nums.

// Complexity:
// Time complexity: O(n)
// Since we are only traversing once in the nums arr.
// Space complexity: O(n)
// Since we are storing the freq of ele of nums in freqArr.

// Code:
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        int freqArr[101];
        int maxFreq = 0;
        int sumFreq = 0;

        for(auto ele : nums){
            freqArr[ele]++;
            int currFreq = freqArr[ele];
            if(currFreq > maxFreq){
                maxFreq = currFreq;
                sumFreq = currFreq;
            }else if(currFreq == maxFreq) sumFreq += currFreq;
        }return sumFreq;  
    }
};

//LINK: https://leetcode.com/problems/count-elements-with-maximum-frequency/solutions/4843758/count-elements-with-maximum-frequency-c-detail-optimal-cpp