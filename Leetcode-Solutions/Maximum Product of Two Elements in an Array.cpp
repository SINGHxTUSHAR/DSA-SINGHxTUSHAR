class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        /* T.C = O(n*n)*/   
        // int sum{0},x{0};

        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         x = (nums[i]-1)*(nums[j]-1);
        //         sum = max(x, sum);
        //     }
        // }return sum;

        /* T.C = O(n)*/
        // int sum{0}, ans{0};
        // int curr_max = nums[0];
        // for(int i=1; i<n; i++){
        //     sum = (curr_max-1)*(nums[i]-1);
        //     if(nums[i] > curr_max) curr_max = nums[i];
        //     ans = max(ans, sum);
        // }return ans;

        /*T.C = O(n) || finding largest & secong largest ele*/
        int lar{0}, sec_lar{0};
        for(auto &ele : nums){
            if(ele > lar){
                sec_lar = lar;
                lar = ele;
            }//check if curr ele is second largest
            else sec_lar = max(sec_lar, ele);
        }return (lar-1)*(sec_lar-1);
    }
};