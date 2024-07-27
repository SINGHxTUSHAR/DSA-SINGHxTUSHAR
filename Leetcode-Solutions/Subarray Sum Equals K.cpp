class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        /*TLE*/
        // int n = nums.size();
        // int cnt{0};
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<n; j++){

        //         int sum{0};
        //         for(int k=i; k<=j; k++){
        //             sum+=nums[k];
        //         }
        //         if(sum == k) cnt++;
        //     }
        // }return cnt;

        /*T.C = O(N*N)*/    
        // int n = nums.size();
        // int cnt{0};

        // for(int i=0; i<n; i++){
        //     int sum{0};
        //     for(int j=i; j<n; j++){
        //         sum+=nums[j];
        //         if(sum == k) cnt++;
        //     }
        // }return cnt;

        int n = nums.size(); // size of the given array.
        map<int,int> mpp;
        int preSum = 0, cnt = 0;

        mpp[0] = 1; // Setting 0 in the map.
        for (int i = 0; i < n; i++) {
            // add current element to prefix Sum:
            preSum += nums[i];

            // Calculate x-k:
            int remove = preSum - k;

            // Add the number of subarrays to be removed:
            cnt += mpp[remove];

            // Update the count of prefix sum in the map.
            mpp[preSum] += 1;
    }return cnt;

    }
};

//LINK: https://leetcode.com/problems/subarray-sum-equals-k/solutions/5542635/c-optimal