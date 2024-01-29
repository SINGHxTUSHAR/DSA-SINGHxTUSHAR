/*Author: TUSHAR SINGH*/

// Intuition:
// If a number is equal to its reverse number, then return true else return false.

// Approach:
// * Find a reverse number
// * Since, we know that negative numbers are not palindrome. So, we can put a condition for that and return false if number is less than zero.
// * compare number with its reverse number which will be stored in temp variable(i,e: temp==num) return true, else return false.

// Complexity:
// Time complexity:O(n)
// Since, we have to reverse a number which takes o(n) time and O(1) to check the palindrome condition.

// Space complexity:O(1)
// Only constant auxiliary space is used to store the data.

// Code:
class Solution {
public:
    bool isPalindrome(int x) {
        long long num{};
        int digit{};
        int temp = x;

        //reversing an number
        while(x){
            digit = x%10;
            num = num*10 + digit;
            x = x/10;
        }
        //checking condition for palindrome
        if(num == temp && temp>=0) return true;
        else return false; 
    }
};