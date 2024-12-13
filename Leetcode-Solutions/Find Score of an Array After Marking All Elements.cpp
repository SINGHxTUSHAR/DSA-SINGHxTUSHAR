class Solution {
public:
    #define p pair<int, int>
    long long findScore(vector<int>& nums) {
        /*BRUTE FORCE APPROACH || T.C = O(n) + O(nlogn)*/
        // int n = nums.size();
        // vector<pair<int, int>> vec(n); //to store the {nums[i],i}

        // for(int i=0; i<n; i++){
        //     vec[i] = {nums[i], i};
        // }

        // sort(begin(vec), end(vec));

        // long long score = 0;
        // vector<bool> visited(n, false);

        // //traversing & selecting min ele with not marked and add to score
        // // also marked it's adjacent ele to marked(true)
        // for(int i=0; i<n; i++){
        //     int min_ele = vec[i].first;
        //     int idx = vec[i].second;

        //     // not marked(false)
        //     if(visited[idx] == false){
        //         visited[idx] = true;
        //         score += min_ele; //add score of min_ele

        //         //adjacent mark
        //         if(idx - 1 >= 0 && visited[idx-1] == false) visited[idx - 1] = true;
        //         if(idx + 1 < n && visited[idx+1] == false) visited[idx + 1] = true; 
        //     }
        // }return score;

        /*********************************************************************/
        /*APPROACH - using min_heap || T.C = O(n)*/
        int n = nums.size();
        vector<bool> visited(n, false);

        priority_queue<p, vector<p>, greater<p>> pq;
        for(int i=0; i<n; i++){
            pq.push({nums[i], i});
        }

        //add the score until the heap is empty
        long long score = 0;
        while(!pq.empty()){
            p temp = pq.top();
            int min_ele = temp.first;
            int idx = temp.second;
            pq.pop();

            //if not visited, then mark & add score
            if(!visited[idx]){
                visited[idx] = true;
                score += min_ele;
                
                //mark the adjacent ele:
                if(idx-1 >= 0 && !visited[idx-1]) visited[idx-1] = true;
                if(idx+1 < n && !visited[idx+1]) visited[idx+1] = true;
            }
        }return score;
    }
};