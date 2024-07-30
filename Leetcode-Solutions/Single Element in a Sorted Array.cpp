class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int s{1}, e{n-2};
        int mid = s + (e-s)/2;

        //base cases
        if(n==1) return nums[0]; //only single ele
        else if(nums[0] != nums[1]) return nums[0]; //first ele is single
        else if(nums[n-1] != nums[n-2]) return nums[n-1]; //last single

        while(s<=e){
            //unique ele property
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];
            else if((mid%2==1 && nums[mid] == nums[mid-1]) || (mid%2==0 && nums[mid] == nums[mid + 1]))
             s = mid+1; //ele is not present in left part
            else e = mid-1;
            mid = s + (e-s)/2;
        }return -1; //never return , if unique ele is present
    }
};

//LINK: https://leetcode.com/problems/single-element-in-a-sorted-array/solutions/5556712/cpp-c-optimal