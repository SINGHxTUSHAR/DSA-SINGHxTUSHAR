class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();
        int s{0}, e{n-1};
        int mid = s + (e-s)/2;
        int ans = n;

        //lower bound - BS-modification
        while(s <= e){
           if(nums[mid] >= target){
            ans = mid;
            e = mid - 1;
           }else s = mid + 1;
            mid = s + (e-s)/2;
        }return ans;

    }
};

//LINK: https://leetcode.com/problems/search-insert-position/solutions/5552080/lower-bound-bs-modification-cpp-c