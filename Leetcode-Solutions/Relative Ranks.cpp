class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n);

        /*using the map || T.C = O(nlogn) || S.C = O(n)*/
        // unordered_map<int, int>mp;

        // //store the index of each score
        // for(int i=0; i<n; i++){
        //     mp[score[i]] = i;
        // }
        // // sort in descending order
        // sort(begin(score), end(score), greater<int>()); 

        // //traverse & rank the athlete at their pos
        // for(int i=0; i<n; i++){
        //     if(i == 0){ //1st rank
        //         int athlete = mp[score[i]];
        //         result[athlete] = "Gold Medal";
        //     }else if(i == 1){ // 2nd rank
        //         int athlete = mp[score[i]];
        //         result[athlete] = "Silver Medal";
        //     }else if(i == 2){ // 3rd rank
        //         int athlete = mp[score[i]];
        //         result[athlete] = "Bronze Medal";
        //     }else{
        //         int athlete = mp[score[i]];
        //         result[athlete] = to_string(i+1);
        //     }
        // }return result;

        /************************************************************************/
        /*uisng the priority queue || T.C = O(nlogn) || S.C = O(n)*/
        // priority_queue<pair<int, int>> pq; //max-heap of pair

        // for(int i=0; i<n; i++){
        //     pq.push({score[i], i});
        // }

        // int rank = 1;
        // while(!pq.empty()){
        //     // idx at which the athlete score is present
        //     int idx = pq.top().second;
        //     pq.pop();

        //     if(rank == 1){
        //         result[idx] = "Gold Medal";
        //     }else if(rank == 2){
        //         result[idx] = "Silver Medal";
        //     }else if(rank == 3){
        //         result[idx] = "Bronze Medal";
        //     }else{
        //         result[idx] = to_string(rank);
        //     }
        //     rank++;
        // }return result;

        /*********************************************************************/
        /*uisng the arr & max_ele concept to compare ele || T.C = O(n) || S.C = O(n)*/
        int M = *max_element(begin(score), end(score));

        vector<int> arr(M+1, -1);

        //store the position of score in arr at the score idx
        for(int i=0; i<n; i++){
            arr[score[i]] = i;
        }

        int rank = 1;
        for(int i=M; i>=0; i--){
            if(arr[i] != -1){
                // idx of score
                int athlete = arr[i];

                if(rank == 1) result[athlete] = "Gold Medal";
                else if(rank == 2) result[athlete] = "Silver Medal";
                else if(rank == 3) result[athlete] = "Bronze Medal";
                else result[athlete] = to_string(rank);

                rank++;
            }
        }return result;
    }
};