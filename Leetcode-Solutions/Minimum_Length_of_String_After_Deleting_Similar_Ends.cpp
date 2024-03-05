//Author: TUSHAR SINGH

// Intuition:
// Simply select the prefix and suffix if the char are same, and then delete them and check for further sub-str.

// Approach:
// * Use two pointer approach, define i and j at starting & end of str.
// * Since we have to make sure that str doesn't intersect, So we will traverse till i is less than j.
// * Also check whether the prefix or suffix is equal or not.
// * Expand the prefix or suffix only if their next char is same.
// * If they are equal simply move and check for further sub-str.
// * Return the remaning number of char of left-over sub-str.

// Complexity
// Time complexity: O(n*n)
// Since we have to traverse in the str and also expanding the suffix or prefix.
// Space complexity: O(1)
// No auxiliary space is used.

// Code:
class Solution {
public:
    int minimumLength(string s) {
        //pointing to the start & end of str
        int i{}, j = s.size()-1;
        //moving between two-pointer
        while(i<j && s[i] == s[j]){
            //expanding the prefix or suffix
            char c = s[i];
            while(i<j && s[i]==c) i++;
            while(i<=j && s[j]==c) j--;
        }return j-i+1;  //returning the left-over sub-string
    }
};

//LINK: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/solutions/4828591/minimum-length-of-string-after-deleting-similar-ends-c-detail-explanation-cpp-optimal