class Solution {
public:
    int MOD = 1e9 + 7;
    int countOrders(int n) {
        if(n == 1) return 1; //base case
        long long ans = 1;

        for(int i=2; i<=n; i++){
            
            int spaces = (i-1)*2 + 1;
            int curr_poss = spaces * (spaces + 1)/2; // n*(n+1)/2

            ans *= curr_poss; //total possible states

            ans %= MOD;
        }
        return ans;
    }
};