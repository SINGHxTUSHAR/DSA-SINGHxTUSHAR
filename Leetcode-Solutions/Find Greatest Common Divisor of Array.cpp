class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int mini, maxi;
        maxi = mini = nums[0];
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // mini = nums[0];
        // maxi = nums[n-1];
        for(int i=1; i<n; i++){
            if(nums[i] >= maxi) maxi = nums[i];
            else if(nums[i]<mini) mini = nums[i];
        }


        if(mini == 0) return maxi;
        if(maxi == 0) return mini;

        //gcd(a,b) = gcd(a-b, b)  || gcd(a%b, b)
        while(maxi != mini){
            if(maxi > mini) maxi = maxi - mini;
            else mini = mini-maxi;
        }return maxi;
        
    }
};