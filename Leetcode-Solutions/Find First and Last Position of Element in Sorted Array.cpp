#include <vector>
class Solution {

private: 
    int firstIndex(vector<int>& nums, int target){
        int n = nums.size();
        int s{0}, e{n-1};
        int first = -1;

        while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target){
                first = mid;
                e = mid - 1;
            }else if(nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }return first;
    }

    int secondIndex(vector<int>& nums, int target){
        int n = nums.size();
        int s{0}, e{n-1};
        int second = -1;

        while(s <= e){
            int mid = s + (e-s)/2;

            if(nums[mid] == target){
                second = mid;
                s = mid + 1;
            }else if(nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }return second;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstIndex(nums, target);
        int second = secondIndex(nums, target);

        vector<int>ans;
        ans.push_back(first);
        ans.push_back(second);

        return ans;
    }
};

//LINK: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/solutions/5552794/cpp-optimal