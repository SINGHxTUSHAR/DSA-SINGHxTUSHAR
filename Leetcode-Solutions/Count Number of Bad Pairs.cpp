class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();

        /*Brute force - simulation || T.C = O(n*n)*/
        // int cnt{0};
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){

        //         if(j - i != nums[j] - nums[i]) cnt++;
        //     }
        // }return cnt;

        long long ans = 0;
        for(int i=0; i<n; i++) nums[i] = nums[i] - i;

        unordered_map<int, int> mp;
        mp[nums[0]] = 1;

        for(int j=1; j<n; j++){

            int countOfNums_j = mp[nums[j]];

            int totalNumsBefore_j = j;

            int badPairs = totalNumsBefore_j - countOfNums_j;

            ans += badPairs;
            mp[nums[j]]++;
        }return ans;
    }
};