class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        /*T.C = O(nlogn) || using deque finding the overlapping intervals*/

        int n = nums.size();
        // to store the possible intervals : {nums[i] + k, nums[i] - k}
        vector<pair<int, int>> intervals(n);

        //push all the possible intervals
        for(int i=0; i<n; i++){
            intervals[i] = {nums[i] - k, nums[i] + k};
        }

        sort(begin(intervals), end(intervals)); //O(nlogn)

        deque<pair<int, int>> dq;
        int maxBeauty = 1;

        //traverse in intervals to check the overlapping
        for(pair<int, int> &interval : intervals){ // O(n)

            //not overlapping
            while(!dq.empty() && dq.front().second < interval.first){
                dq.pop_front();
            }
            //overlapping interval
            dq.push_back(interval);
            //update the max possible overlapping intervals
            maxBeauty = max(maxBeauty, int(dq.size()));
        }return maxBeauty;
    }
};