class Solution {
private:
    int recursiveBS(vector<int>& nums, int target, int s, int e){
        //base case
        if(s > e) return -1;

        //recursive calls
        int mid = s + (e-s)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) 
            return recursiveBS(nums, target, mid+1, e);
        return recursiveBS(nums, target, s, mid-1);

    }
public:
    int search(vector<int>& nums, int target) {

        // int n = nums.size();
        // int s{0}, e{n-1};
        // int m = s + (e-s)/2;

        // while(s <= e){

        //     if(nums[m] == target) return m;

        //     else if(target > nums[m]) s = m + 1;
        //     else e = m - 1;
        //     m = s + (e-s)/2;
        // }return -1;
        return recursiveBS(nums, target, 0, nums.size()-1);
    }
};

//LINK: https://leetcode.com/problems/binary-search/solutions/5551673/recursive-optimal-c-cpp