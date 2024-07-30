class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s{0}, e{n-1};
        int mid = s + (e-s)/2;

        while(s<=e){
            if(nums[mid]==target) return true;
            
            //to cover the edge case : repetition of ele: finding optimal subarray
            if(nums[s]==nums[mid] && nums[mid]==nums[e]){
                s++;
                e--;
                continue;
            }
            //left part : sorted
            if(nums[s]<=nums[mid]){//target exists
                if(nums[s]<=target && target<=nums[mid]) e = mid-1;
                else s = mid+1;
            }else{ //right : sorted
                if(nums[mid]<=target && target<=nums[e]) s = mid+1;
                else e = mid-1;
            }mid = s + (e-s)/2;
        }return false;
    }
};

//LINK: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/solutions/5557569/cpp-c-optimal