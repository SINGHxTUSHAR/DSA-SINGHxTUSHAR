class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        /* T.C = O(n) || S.C = O(k)*/

        // to store the freq of remainder of ele when divide by k.
        // reaminder : 1 % 5 = 5 , store rem=5 at 5th index in mp
        vector<int> mp(k, 0);

        for(auto &num : arr){
            //since num can be -ve, to counter or handle -ve num.
            int rem = (num % k + k) % k;
            mp[rem]++;
        }
        
        // if rem = 0 has odd freq,
        // means their exists one such pair which is not divisible by k
        if(mp[0] % 2 != 0) return false;

        for(int rem = 1; rem <= k/2; rem++){
            int remaining_half = k - rem;

            //pair doesn't exists
            if(mp[remaining_half] != mp[rem]) return false;
        }return true;

    }
};