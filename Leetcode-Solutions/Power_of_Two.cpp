/*Author: TUSHAR SINGH*/

// Intuition:
// Since we know that if we divide of power of 2 with 2 it will give us an even num which is further divided by 2. If the last num is 1 then it means the given n is power of 2 , else it is not.

// Approach:
// * If n is divisible by 2, then find the quotient of n by 2 till it is divisible by 2 and if the last possible quotient is 1 then return true.
// * Else return false and make sure to cover the edge case of n=0.

// Complexity:
// Time complexity: O(logn)
// Since we are dealing in power of 2.
// Space complexity: O(1)
// No auxiliary space is used.

// Code:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //edge case
        if(n==0) return false;
        
        //if n is divisible by 2,  find its quotient untill its last one
        while(n%2==0) n/=2;
    
        if(n==1) return true;
        else return false;
    }
};

//LINK: https://leetcode.com/problems/power-of-two/solutions/4751351/power-of-two-beats-100-detail-explanation-without-recursion-optimized