class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();

        if(n == 1) return 1;
        int ans{0};

        /*brute force approach*/
        // for(int i=0; i<n; i++){ //for pt_1
        //     for(int j=i+1; j<n; j++){ //for pt_2

        //         int cnt = 2;

        //         int dx = points[j][0] - points[i][0]; // x2-x1
        //         int dy = points[j][1] - points[i][1]; // y2-y1

        //         // int slope = dy/dx; //slope : m = (y2-y1) / (x2-x1)

        //         /*
        //             dy/dx = _dy/_dx
        //             dy*_dx = _dy*dx //cross multiplication
        //         */

        //         for(int k=0; k<n; k++){ //for pt_3
        //             if(k != i && k != j){

        //                 int _dx = points[k][0] - points[i][0]; // x3-x1
        //                 int _dy = points[k][1] - points[i][1]; // y3-y1

        //                 if(dy*_dx == _dy*dx) cnt++;  // if slopes are equal
        //             }
        //         } ans = max(ans, cnt); //considering the max pts on straight line
        //     }
        // }return ans;

        /*optimal approach*/
        for(int i=0; i<n; i++){
            unordered_map<double, int>mpp;

            for(int j=0; j<n; j++){
                if(j == i) continue; // if same pt, skip;

                auto dx = points[j][0] - points[i][0]; // x2-x1
                auto dy = points[j][1] - points[i][1]; // y2-y1

                // we can also use the gcd comparator func()
                auto theta = atan2(dy , dx); //atan2 is a func() to find the inverse of tan
                mpp[theta]++;
            }

            //update max theta pt's
            for(auto &it : mpp){
                ans = max(ans, it.second + 1);
            }
        }return ans;
    }
};

//link: https://leetcode.com/problems/max-points-on-a-line/solutions/5668010/brute-force-optimal-cpp-c-description-beats-100