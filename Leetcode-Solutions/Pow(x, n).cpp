class Solution {
public:
    double solve(double x, long n){

        if(n == 0) return 1; // base case
        if(n < 0) return solve(1/x, -n); //negative power : n
        if(n%2 == 0) return solve(x*x, n/2); //even power : n
        else return x * solve(x*x, (n-1)/2); //odd power : n
    }
    double myPow(double x, int n) {
        return solve(x, long(n));
    }
};