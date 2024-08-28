class Solution {
public:
    bool isPowerOfFour(int n) {
        /*log n*/
        // if(n==1) return true;
        // while(n%4==0 && n>0){
        //     n /= 4;
        //     if(n==1) return true;
        // } 
        // return false;

        /*using maths //4^x = log(n)/log(4)*/
        // if(n<=0) return false;

        // int x = log(n)/log(4); //power of 4 : 4^x = n // x * log(4) = log(n);

        // if(pow(4, x) == n) return true; //if n is power of 4
        // return false;

        /*using maths & bitmagic*/
        //if n is power of 4, then n is power of 2
        // n & (n-1) == 0
        if(n<=0) return false;

        //every n is power of 4 then (n-1) will be multiple of 3
        // 4 = (4-1)%3 , 16 = (16-1)%3 , 64 = (64-1)%3
        if((n&(n-1))==0 && (n-1)%3==0) return true;
        return false;
    }
};