class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        // unordered_map<int, int> mpp;
        vector<int>mpp(n+1, 0);
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            int freq = mpp[nums[i]];

            if(freq == ans.size()){
                //already an ele exists in the curr row
                ans.push_back({}); // add the row
            }
            //add the ele to ans vector
            ans[freq].push_back(nums[i]);
            mpp[nums[i]]++;
        }return ans;
    }
};