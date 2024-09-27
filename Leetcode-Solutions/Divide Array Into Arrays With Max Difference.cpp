class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> ans;

        //to get the closet pair of ele
        sort(begin(nums), end(nums));

        for(int i=0; i<n-2; i+=3){
            // if the pair difference greater than k, return {}
            if(nums[i+2] - nums[i] > k) return {};
            ans.push_back({nums[i], nums[i+1], nums[i+2]});
        }return ans;
    }
};