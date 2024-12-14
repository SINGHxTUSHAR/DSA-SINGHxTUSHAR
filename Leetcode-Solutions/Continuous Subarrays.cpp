class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();

        map<int, int> mp;
        int i=0;
        int j=0;

        long long cnt = 0;
        while(j < n){
            mp[nums[j]]++; //update freq in map for ele

            //out of bound : not valid subarr
            while(abs(mp.rbegin()->first - mp.begin()->first) > 2){
                //shrink the window
                mp[nums[i]]--;
                //if freq = 0, erase the ele
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
            //update the possible continous subarr
            cnt += j-i+1;
            j++;
        }return cnt;
    }
};