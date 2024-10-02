class Solution {
public:
    /*Recursion & memoization*/
    // T.C = O(n) & O(n) = O(38)*/
    // int t[38];
    // int solve(int n){
    //     //base case
    //     if(n == 0) return 0;
    //     if(n == 1 || n == 2) return 1;

    //     if(t[n] != -1) return t[n];

    //     // t(n) = t(n-1) + t(n-2) + t(n-3)
    //     int a = solve(n-1);
    //     int b = solve(n-2);
    //     int c = solve(n-3);

    //     return t[n] = a+b+c;
    // }
    int tribonacci(int n) {
        // memset(t, -1, sizeof(t));
        // return solve(n);
        
        /************************************************************/
        /*Bottom-up Approach*/
        // T.C = O(n) ~ O(1) & S.C = O(1)

        // int t[38];

        // t[0] = 0;
        // t[1] = 1;
        // t[2] = 1;

        // for(int i=3; i<38; i++){
        //     t[i] = t[i-1] + t[i-2] + t[i-3];
        // }return t[n];

        /*****************************************************************/
        //using shifting the var
        // T.C = O(n) & S.C = O(1)
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        
        int a = 0;
        int b = 1;
        int c = 1;
        int d = a + b + c;

        for(int i=3 ; i<=n; i++){
            d = a+b+c;
            a = b;
            b = c;
            c = d;
        }return d;
    }
};