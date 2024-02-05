// Intuition:
// Count the frequency of character in given string and return the first non-repeating char which will have frequency of 1, else return -1.

// Approach:
// * To store the frequency we can use hash-map, but since we know we only have 26 char, we can also use an arr of 26 size to store the count of char.
// * Design a loop to store the frequency of char in string s into count arr.
// * Design another loop to iterate over the string s and check whether this char frequency is 1, if it is 1 then return its index.
// * Else return -1.

// Complexity:
// Time complexity: O(n)
// Since we are traversing over a string which can have n char.
// Space complexity: O(1)
// constant auxiliary space is used.

// Code:
class Solution {
public:
    int firstUniqChar(string s) {
        //arr to store the frequency of char
        int count[26] = {};

        //counting the frequency of charachter
        for(auto c: s){
            count[c-'a'] +=1;
        } 
        //if count of current char is 1, return its index
        for(int i=0; i<s.length(); i++){
            if(count[s[i]-'a']==1) return i;
        }
        return -1;  
    }
};

//LINK: https://leetcode.com/problems/first-unique-character-in-a-string/solutions/4678694/first-unique-character-string-cpp-detail-explanation-beats-93