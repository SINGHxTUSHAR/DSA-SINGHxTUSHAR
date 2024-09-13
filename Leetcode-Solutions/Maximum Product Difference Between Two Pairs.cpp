class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        /*T.C = 0(n*log n)*/
        //sort the given arr : strating 2 ele are min : end 2 are max
        // sort(begin(nums), end(nums));
        // int n = nums.size();
        // return (nums[n-1]*nums[n-2]) - (nums[0]*nums[1]);
        

        /* T.C = O(n)*/
        int a{}, b{}, c{}, d{};
        a=b=INT_MIN;
        c=d=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            //finding largest 2 
            if(nums[i] > a){
                b = a; // b = second largest
                a = nums[i]; // a = largest
            }else b = max(b, nums[i]);

            //finding smallest 2
            if(nums[i] < d){
                c = d; // c = second smallest
                d = nums[i]; // d = smallest
            }else c = min(c, nums[i]);
        }
        // cout<<"********************"<<a<<b<<c<<d<<endl;
        return (a*b)-(c*d);
    }
};