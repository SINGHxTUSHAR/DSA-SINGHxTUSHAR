class Solution {
public:
    int singleNumber(vector<int>& nums) {

        /* T.C = O(N*N) */
        int n = nums.size();

        // for(int i=0; i<n; i++){

        //     int num = nums[i];
        //     int cnt{};
        //     for(int j=0; j<n; j++){
        //         if(nums[j] == num) cnt++;
        //     }if(cnt == 1) return num;
        // }return -1;


        /* T.C = O(n*logn) */
        // map<int, int>mpp;

        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto ele : mpp){
        //     if(ele.second == 1) return ele.first;
        // }return -1; 
        

        /* T.C = O(N) */
        int xorr {};

        for(int i=0; i<n; i++){
            xorr = xorr ^ nums[i];
        }return xorr;
    }
};


//LINK: https://leetcode.com/problems/single-number/solutions/5466737/single-number-optimized-c