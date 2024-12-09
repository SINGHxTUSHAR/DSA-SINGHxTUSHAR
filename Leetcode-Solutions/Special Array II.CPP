class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        /*T.C = O(n + m)*/
        int n = nums.size();
        int m = queries.size();

        //total cnt of violating idx in nums
        vector<int> cumSum(n,0);

        cumSum[0] = 0; //1st idx is always valid

        for(int i=1; i<n; i++){
            //violating idx parity
            if(nums[i]%2 == nums[i-1]%2){
                cumSum[i] = cumSum[i-1] + 1;
            }else{
                cumSum[i] = cumSum[i-1]; // not violating
            }
        }

        vector<bool> ans(m, false);
        int curr_query_idx = 0; // to amrk the idx of query in queries arr
        for(vector<int> &query : queries){
            int start = query[0];
            int end = query[1];

            // if their is no violating idx in query subarray
            if(cumSum[end] - cumSum[start] == 0){
                ans[curr_query_idx] = true;
            }
            curr_query_idx++;
        }

        return ans;

    }
};