// Intuition:
// We have to return the anagrams which contains the string having same alphabets in it. We can sort the given arr of string and store the values corresponding to the keys. Return those ele(values) whose key is same(which are anagrams).

// Approach:
// * Create a unoerdered mapp to store the sorted str
// * Design an iterator over the arr od str and sort the str and push to the map.
// * Make sure that we are pusing the original string to the value and sorted str to the keys of unordered map{mpp}.
// * Create a vector of vector of string type to store the anagrams.
// * Design an iterator to traverse over the map and push the values which are having same key values

// Complexity:
// Time complexity:O(nlogk)
// This will have O(n) complexity as we are traversing over the map and since we are also sorting the str which takes O(logk) complexity.
// Space complexity:O(nk)
// Since we are storing the values original string along with the sorted str which are keys {onordered_map}.

// Code:
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;

        //to sort the ele in the arr of str and pushing in mpp
        for(auto ele: strs){
            string originalString = ele;
            sort(ele.begin(),ele.end());
            mpp[ele].push_back(originalString);
        }
        //traversing in mpp and pushing values in ans
        vector<vector<string>> anagrams;
        for(auto [key, values]: mpp){
            anagrams.push_back(values);
        }
        return anagrams;
        
    }
};

//LINK: https://leetcode.com/problems/group-anagrams/solutions/4684509/group-anagrams-cpp-detail-explaination-beats-83-optimal-approach