class Solution {
public:
    bool isUgly(int n) {
        //ugly prime - 2,3,5
        while(n > 1){
            if(n%2==0) n /= 2;
            else if(n%3==0) n /= 3;
            else if(n%5==0) n /= 5;
            else return false;
        }
        if(n==1) return true;
        return false;
    }
};