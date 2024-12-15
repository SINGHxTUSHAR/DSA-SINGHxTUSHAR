class Solution {
public: 
    #define p pair<double, int> 
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        // PR : pass ration
        // APR : Average pass ratio
        // delta : max improvement after adding extraStudents to maxi the APR
        /**********************************************************************************/
        /*T.C = O(n^2) || using delta*/
        // int n = classes.size();

        // vector<double> pr(n);
        // for(int i=0; i<n; i++){
        //     double ratio = (double)classes[i][0] / classes[i][1]; //pass ratio of each class
        //     pr[i] = ratio;
        // }

        // while(extraStudents--){ //O(n)
        //     vector<double> updated_pr(n);
        //     for(int i=0; i<n; i++){
        //         double newRatio = (double)(classes[i][0] + 1)/(classes[i][1] + 1);
        //         updated_pr[i] = newRatio;
        //     }

        //     int bestClassIdx = 0;
        //     double bestDelta = 0;

        //     for(int i=0; i<n; i++){ // O(n)
        //         double delta = updated_pr[i] - pr[i]; //improvement of curr_class after adding extraStudent
        //         if(delta > bestDelta){
        //             bestDelta = delta;
        //             bestClassIdx = i;
        //         } 
        //     }

        //     pr[bestClassIdx] = updated_pr[bestClassIdx];
        //     classes[bestClassIdx][0]++;
        //     classes[bestClassIdx][1]++;
        // }

        // double result = 0;
        // for(int i=0; i<n; i++){
        //     result += pr[i];
        // }

        // return result/n; // BEST APR

        /***************************************************************************************************/
        /*T.C = O(K * logn)*/
        int n = classes.size();
        priority_queue<p, vector<p>> pq;

        //pushing the max_delta, idx in max_heap : O(1)
        for(int i=0; i<n; i++){
            double curr_pr = (double)classes[i][0]/classes[i][1]; // curr PR
            double new_pr = (double)(classes[i][0]+1)/(classes[i][1]+1); // after adding student
            double delta = new_pr - curr_pr;
            pq.push({delta, i});
        }

        while(extraStudents--){ //O(k)
            auto curr_max = pq.top();
            pq.pop();

            double delta = curr_max.first;
            int idx = curr_max.second;

            classes[idx][0]++;
            classes[idx][1]++;

            //for second or upcoming extraStudents
            double curr_pr = (double)classes[idx][0]/classes[idx][1]; // curr PR
            double new_pr = (double)(classes[idx][0]+1)/(classes[idx][1]+1); // after adding student
            delta = new_pr - curr_pr;
            pq.push({delta, idx}); //O(logn)
        }

        double result = 0;
        for(int i=0; i<n; i++){
            result += (double)classes[i][0]/classes[i][1];
        }

        return result/n;
    }
};