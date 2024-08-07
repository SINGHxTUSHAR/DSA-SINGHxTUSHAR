class Solution {
public:
    int countPrimes(int n) {
        /*sieve of eratosthenes*/
        vector<bool> isPrime(n+1, true);
        int cnt{};

        isPrime[0] = isPrime[1] = false;

        for(int i=2; i<n; i++){
            if(isPrime[i]){
                cnt++;

                //remove the multiples
                for(int j=2*i; j<n; j=j+i) isPrime[j] = false;
            }
        }return cnt;
    }
};