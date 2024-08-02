class Solution {
private: 
    // int maxi(vector<int>& nums){
    //     int maxi = INT_MIN;

    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i] > maxi) maxi = nums[i];
    //     }return maxi;
    // }

    int sumarr(vector<int>& nums, int x){
        int sum{0};

        for(int i=0; i<nums.size(); i++){
            sum += ceil(double(nums[i])/double(x));
        }return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int s{1}, e{*max_element(nums.begin(), nums.end())};
        int mid = s + (e-s)/2;

        while(s <= e){
            int sum = sumarr(nums, mid);
            if(sum <= threshold) e = mid - 1;
            else s = mid + 1;
            mid = s + (e-s)/2;
            
        }return s;
        
    }
};

//LINK: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/solutions/5572597/cpp-optimal-bs-c