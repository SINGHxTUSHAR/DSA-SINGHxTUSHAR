class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();

        /*bryte force - TLE*/
        // int ramp{0};
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] <= nums[j]) ramp = max(ramp, j-i);
        //     }
        // }return ramp;

        /*TLE - but better than above one : since ignore unnecessary test-case*/ 
        // int ramp{0};
        // for(int i=0; i<n-1; i++){
        //     for(int j=n-1; j>i; j--){
        //         if(nums[i] <= nums[j]){
        //             ramp = max(ramp, j-i);
        //             break;
        //         }
        //     }
        // }return ramp;

        /*uisng two-pointer & arr space || T.C = O(n) || S.C = O(n)*/
        vector<int> rightMaxEle(n);
        rightMaxEle[n-1] = nums[n-1];

        for(int i=n-2; i>=0; i--){
            rightMaxEle[i] = max(rightMaxEle[i+1], nums[i]);
        }

        int ramp{0}, i{0}, j{0};

        // j: ptr to point rightMaxEle arr
        // i: ptr to point nums arr
        while(j < n){
            // no possible ramp width, check for other pair
            while(i < j && nums[i] > rightMaxEle[j]) i++;

            ramp = max(ramp, j-i);
            j++;
        }return ramp;
    }
};