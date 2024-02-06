/*Author: TUSHAR SINGH*/

// Intuition:
// Since we have to check for palindrome we have to first check whether the give str is valid or not.
// Also we have to convert the upper case alphabets to lower case before checking.
// If str is valid , then we will check for palindrome.

// Approach:
// * Create a empty string temp to store the required str.
// * Design a for loop to traverse over the str and check each alphabet of str is valid or not.
// * Design a valid function which has condition as " ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )".
// * If the alphabet is valid , push it into the temp str, Now we have updated string which is temp.
// * Design a loop to traverse in temp string and convert all the upper case to lower case by designing a fun and specific conditions.
// * Finally when we have a str which is in lower case and without spaces or any other numeric letter then check for palindrome.
// * We can check for palindrome by using the two pointer approach.

// Complexity:
// Time complexity: O(n)
// Since we are traversing over a str with n characters
// Space complexity: O(n)
// Since we are using a n auxiliary space for a temp str to store the modified str.

// Code:
class Solution {
    
private:
        //checking for alpha-numeric character
        bool valid(char ch){
            if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
                return 1;
            }
            return 0;
        }
        //converting to lower case
        char tolowercase(char ch){
            if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
                return ch;
            }
            else{
                //logic to convert upper to lower
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }
        //checking for palindrome
        bool checkpalindrome(string a){
            int s=0;
            int e=a.length()-1;

            while(s<=e){
                if(a[s] != a[e]){
                    return 0; 
                }                 
                else{
                     s++;
                     e--;
                }
            }return 1;
        }

public:
    bool isPalindrome(string s) {
        string temp {};
        for(int j=0; j<s.length(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j=0; j<temp.length(); j++){
            temp[j]=tolowercase(temp[j]);
        }

        return checkpalindrome(temp);
    }
};


//LINK: https://leetcode.com/problems/valid-palindrome/solutions/4687963/valid-palindrome-cpp-detail-explanation-beats-90-optimal-approach