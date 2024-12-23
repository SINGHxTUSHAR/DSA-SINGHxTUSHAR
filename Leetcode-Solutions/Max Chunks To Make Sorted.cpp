class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        /*Approach - 1*/
        // to store the prefixmax, suffixmin for idx i
        // vector<int> prefixMax(begin(arr), end(arr));
        // vector<int> suffixMin(begin(arr), end(arr));

        // for(int i=1; i<n; i++){
        //     prefixMax[i] = max(prefixMax[i], prefixMax[i-1]);
        // }

        // for(int i= n-2; i>=0; i--){
        //     suffixMin[i] = min(suffixMin[i], suffixMin[i+1]);
        // }

        // int chunksCnt = 0;
        // for(int i=0; i<n; i++){
        //     int max_before_i = i > 0 ? prefixMax[i-1] : -1;
        //     int min_after_i = suffixMin[i];

        //     if(max_before_i < min_after_i) chunksCnt++;
        // }
        // return chunksCnt;
        /***************************************************************************/

        /*Approach - 2*/
        // int cumSum = 0; //sum of ele of given arr
        // int originalSum = 0; //sum of ariginal sorted arr till idx n-1

        // int chunkCnt = 0;
        // for(int i=0; i<n; i++){
        //     cumSum += arr[i];
        //     originalSum += i;

        //     if(cumSum == originalSum) chunkCnt++;  
        // }return chunkCnt;
        /************************************************************************************/

        /*Approach - 3*/
        int maxTillNow = -1;
        int chunkCnt = 0;

        for(int i=0; i<n; i++){
            maxTillNow = max(maxTillNow, arr[i]);

            if(maxTillNow == i) chunkCnt++;
        }return chunkCnt;
    }
};