class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        /*brute force approach - T.C = O(NlogN) & S.C = O(1)*/
        // sort(begin(arr), end(arr));

        // int n = arr.size();
        // int cmDiff = arr[1] - arr[0];

        // for(int i=2; i<n; i++){
        //     int diff = arr[i]-arr[i-1];
        //     if(cmDiff != diff) return false;
        // }return true;


        /*optimal approach - T.C = O(N) & S.C = O(N)*/
        int n = arr.size();

        unordered_set<int> st(begin(arr), end(arr));
        
        int min_ele = *min_element(begin(arr), end(arr)); //a
        int max_ele = *max_element(begin(arr), end(arr)); // a + (n-1)*d

        /*
            d = (max_ele - min_ele)/(n-1);
        */

        if((max_ele - min_ele) % (n-1) != 0) return false; //no common diff "d";

        int d = (max_ele - min_ele)/(n-1);

        // a, a+d, a+2d, a+3d + ..., a + (n-1)*d ;
        int i=0;
        while(i < n){
            int num = min_ele + i*d; // a + i*d

            if(st.find(num) == st.end()) return false; // no common diff ele present

            i++;
        }return true;
    }
};