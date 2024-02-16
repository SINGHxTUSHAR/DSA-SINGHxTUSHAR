/*Author: TUSHAR SINGH*/

// Intuition:
// * We have to return the least unique ele in arr. So we have to remove k uncommon(unique) ele from arr.
// * We can do this by just simply calculating the freq of unique ele and then removing k ele as per their freq.

// Approach:
// * Calculate the freq by unordered_map.
// * Since we cann't sort the unordered map, so push the freq into vector.
// * Sort this freq Vector.
// * Define a int var called element removed(er).
// * Design a loop to iterate over this freq vector and calculate element removed and make sure that, if er > k then return the unique ele left in arr.
// * Else return 0.

// Complexity:
// Time complexity: O(nlogn)
// Since we are using the sort fun of STL as well as iterating over the freq vector to check the unique ele in arr.
// Space complexity: O(n)
// As we are using the unordered_map to cal freq of n ele.

// Code:
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        //calculating the frequency of nums
        unordered_map<int,int>freq;
        for(auto ele : arr) freq[ele]++;
        
        //pushing the freq count to freqVector 
        vector<int>freqVector;
        for(auto ele : freq) freqVector.push_back(ele.second);

        sort(freqVector.begin(),freqVector.end());

        int er{};   //element_removed as per k
        
        //removing the k ele of least freq
        for(int i=0; i<freqVector.size(); i++){
            er += freqVector[i];
            //return the least unique num in arr
            if(er>k) return freqVector.size()-i;
        }
        return 0;
    }
};

//LINK: https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/solutions/4737335/beginner-friendly-cpp-detail-explanation-beats-85-optimized