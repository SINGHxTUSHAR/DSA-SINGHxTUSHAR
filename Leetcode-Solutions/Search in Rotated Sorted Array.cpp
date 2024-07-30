class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int s{0}, e{n-1};
        int mid = s + (e-s)/2;

        while(s<=e){
            if(nums[mid]==target) return mid;

            //if left part is sorted
            if(nums[s] <= nums[mid]){
                //ele exist in left sorted part
                if(nums[s]<=target && nums[mid]>=target) e = mid-1;
                else s = mid+1; //not in left
            }else{//right part is sorted
                //ele exist in right sorted part
                if(nums[mid]<=target && target<=nums[e]) s = mid+1;
                else e = mid-1; //not in right
            }mid = s + (e-s)/2;
        }return -1;
        
        
    }
};

//LINK: https://leetcode.com/problems/search-in-rotated-sorted-array/solutions/5557419/cpp-c-optimal