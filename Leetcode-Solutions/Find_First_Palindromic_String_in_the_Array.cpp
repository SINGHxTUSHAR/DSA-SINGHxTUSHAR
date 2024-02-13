/*Author: TUSHAR SINGH*/

// Intuition:
// We will simply check each ele in words for palindrome, if that str(ele) is palindrome then return that str, else return an empty str.

// Approach:
// * Design a loop to iterate over the words arr.
// * Check each element or str in words for palindrome condition.
// * If the ele is palindrome then return that element.
// * Else, return an empty string.
// * To check for palindrome their are two approaches :
//   * Using Two pointers
//   * Using a reverse fun() in STL

// Complexity:
// Time complexity: O(n)
// Since we are traversing over the arr which can contain n ele and may be in worst case the last ele would be a palindrome . Also we are using the reverse func() of STL which takes O(n) time to compute.
// Space complexity: O(1)
// We are using a constant auxiliary space which is for an empty str.

// Code;
class Solution {
public:

    /*Their are two approach to find palindrome*/

    /*Approach-1*/
    bool is_palindrome(string s){
        //using two pinter
        int st{};
        int en = s.length()-1;

        for(int i=0; i<s.length()/2; i++){
            if(s[st]==s[en]){
                st++;
                en--;
            }
        } if(st >= s.length()/2) return true;
        else return false;
    }
    
    /*Approach-2*/
    bool is_palindrome(string s){
        //using STL reverse fun()
        string rev_str = s;

        reverse(rev_str.begin(),rev_str.end());

        if(s==rev_str) return true;
        else return false;
    }

    string firstPalindrome(vector<string>& words) {

        string empty = "";

        for(int i=0; i<words.size(); i++){
            /*Remember to comment out one approach using executing of code*/
             if(is_palindrome(words[i])){
                 return words[i];
             }
        }
        return empty;  
    }
};


//LINK: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/solutions/4719127/find-first-palindromic-str-in-arr-cpp-detail-explanation