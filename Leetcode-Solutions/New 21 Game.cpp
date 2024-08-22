class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        
        /*brtue force approach*/
        // vector<double> p(n+1, 0.0); // p[i] = prob. of getting score = i;

        // p[0] = 1; // intially the score = 0 

        // for(int i=1; i<=n; i++){

        //     for(int j=1; j<=maxPts; j++){
        //         //prob. of card(j) score = 1/maxPts;
        //         //remaining score = i-j : p = [i-j];
        //         if(i-j >= 0 && i-j < k) p[i] += p[i-j]* 1/maxPts;
        //     }
        // }
        // // selecte the prob. from k to n
        // return accumulate(begin(p) + k, end(p), 0.0);

        /*optimal approach*/
        vector<double> p(n+1, 0.0);
        p[0] = 1;

        double currProbSum = k == 0 ? 0 : 1;

        for(int i=1; i<=n; i++){

            p[i] = currProbSum/maxPts;

            if(i < k) currProbSum += p[i];
            if(i-maxPts >=0 && i-maxPts < k) currProbSum -= p[i-maxPts];
        }
        return accumulate(begin(p) + k, end(p), 0.0);
    }
};