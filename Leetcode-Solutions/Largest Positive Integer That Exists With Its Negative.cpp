class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        /* T.C = O(n) & S.C = O(1)*/
        // int maxele = -1;
        
        // //iterate & check for max_ele & it's counterpart
        // for(auto &num : nums){ 
        //     if(num > 0 && find(begin(nums), end(nums), -num) != nums.end()){
        //         maxele = max(maxele, num);
        //     }
        // }return maxele;

        /***********************************************************************/
        /*Approach - using sort + 2 pointer */
        //T.C = O(n) || S.C = O(1)
        // sort(begin(nums), end(nums));

        // int result = -1;

        // // 2 ptr
        // int i = 0;
        // int j = nums.size()-1;

        // while(i < j){
        //     // max ele with counter part is present
        //     if(-nums[i] == nums[j]) return nums[j];

        //     // shift ele to check for counter part
        //     if(-nums[i] < nums[j]) j--;
        //     else i++;
        // }return result;

        /******************************************************************************/
        /*using the arr & nums[i] as index || T.C = O(n) || S.C = O(1)*/
            int arr[2001] = {0};
            //since -1000 <= nums[i] <= 1000 in constraints
            int result = -1;

            for(auto &num : nums){
                // counter part is present
                if(arr[-num + 1000] == 1){
                    result = max(result, abs(num));
                }

                //update the number at valid idx
                arr[num + 1000] = 1;
            }return result;
    }
};