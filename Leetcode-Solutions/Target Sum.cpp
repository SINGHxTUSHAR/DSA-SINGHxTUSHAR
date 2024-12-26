class Solution {
public:
    int solve(vector<int>nums, int target, int idx, int currSum, unordered_map<string, int> &mp){
        if(idx == nums.size()){
            if(currSum == target){
                return 1;
            }else return 0;
        }

        string key = to_string(idx) + "_" + to_string(currSum);
        if(mp.count(key)) return mp[key];

        int plus = solve(nums, target, idx+1, currSum + nums[idx], mp);
        int minus = solve(nums, target, idx+1, currSum - nums[idx], mp);

        return mp[key] =  plus + minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        // return solve(nums, target, 0, 0);
        unordered_map<string, int> mp;
        return solve(nums, target, 0, 0, mp);
    }
};