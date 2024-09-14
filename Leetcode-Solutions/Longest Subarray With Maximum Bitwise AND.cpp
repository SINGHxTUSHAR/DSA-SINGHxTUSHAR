class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int maxEle{0}, streak{0}, result{0};

        for(auto &ele : nums){
            if(ele > maxEle){
                maxEle = ele; //curr max element in nums
                // result & streak = 0 : since this is for new max ele
                result = 0; 
                streak = 0;
            }
            //continue streak for max ele
            if(maxEle == ele){
                streak++;
            }else streak = 0;
            // max streak for curr max ele
            result = max(result, streak);
        }return result;
    }
};