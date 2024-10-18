class Solution {
public:
    /*T.C = O((n+1) * (maxOR + 1)) || S.C = O(n * maxOR)*/
    int countSubsets(int idx, int currOR, vector<int> &nums, int maxOR, vector<vector<int>> &t){
        //base case
        if(idx == nums.size()){
            if(currOR == maxOR) return 1;
            return 0;
        }

        //memoziation condition:
        if(t[idx][currOR] != -1) return t[idx][currOR];

        //curr ele is selected : nums[idx]
        int takeCnt = countSubsets(idx+1, currOR | nums[idx], nums, maxOR, t);

        //Not taken : curr ele is rejected
        int notTakeCnt = countSubsets(idx+1, currOR, nums, maxOR, t);

        //return possible subsets with maxOR
        return t[idx][currOR] = takeCnt + notTakeCnt;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR = 0;
        for(int &num : nums) maxOR |= num;
        
        int n = nums.size();
        vector<vector<int>> t(n+1, vector<int>(maxOR+1, -1));
        int currOR = 0;
        return countSubsets(0, currOR, nums, maxOR, t);
    }
};