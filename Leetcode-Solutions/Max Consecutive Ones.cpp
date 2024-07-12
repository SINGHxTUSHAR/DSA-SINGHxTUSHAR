class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        /* T.C = O(n) */
        int n = nums.size();
        int max_cnt{};
        int cnt{};

        for(int i=0; i<n; i++){

            if(nums[i] == 1) cnt++;
            else cnt=0;

            max_cnt = max(cnt, max_cnt);
            
        }return max_cnt;
        
    }
};

//LINK: https://leetcode.com/problems/max-consecutive-ones/solutions/5466868/max-consecutive-ones-optimized-c