/*Author: TUSHAR SINGH*/

// Intuition:
// Extract a digit from the given number one by one and place it at starting and if ans is out of range then return zero, else return ans.

// Approach:
// * firstly, extract digit from the given number which is x by: digit = x%10;
// * Place this at starting by: num = num*10 + digit;
// * Repeat step 1 & 2 until all the digits get extracted or number becomes zero.
// * Return zero if num's range is greater then integer range, else return your answer which is num.

// Complexity:
// Time complexity:O(n)
// Since, we have used a while loop which will iterate till the number becomes zero or till total number of digits get extracted.

// Space complexity:O(1)
// constant auxiliary space is used which is num to store ans and digit to store extracted digit.

// Code:
class Solution {
public:
    int reverse(int x) {

        int num{},digit{};

        while(x){
        //extracting the last digit of given number
        digit = x%10;
        //checking the range condition
        if( (num<(INT_MIN/10)) || (num>(INT_MAX/10)) ) return 0;
        //reversing given number
        num = num*10 + digit;
        x= x/10;  //updating number

        }return num; 
    }
};

//LINK: https://leetcode.com/problems/reverse-integer/solutions/4643914/reverse-integercbeginner-friendlysimplest/