class Solution {
public:
    int n;  
    int t[100001][3]; //memo

    int binarysearch(vector<vector<int>> &events, int endTime){
        int l = 0;
        int r = n-1;
        int result = n; //invalid idx

        while(l <= r){
            int mid = l + (r-l)/2;

            if(events[mid][0] > endTime){
                //next valid event
                result = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }

        return result;
    }

    int solve(vector<vector<int>> &events, int i, int cnt){
        if (cnt == 2 || i >= n) return 0;

        //condition check:
        if(t[i][cnt] != -1) return t[i][cnt];

        // to get the next valid idx : end of i idx < start of j idx
        int next_val_idx = binarysearch(events, events[i][1]);
        
        //event is attended;
        int attend = events[i][2] + solve(events, next_val_idx, cnt+1); 

        //event is skip
        int skip = solve(events, i+1, cnt);

        return t[i][cnt] =  max(attend, skip);
    }

    int maxTwoEvents(vector<vector<int>>& events) {
        
        n = events.size();

        // to attain the perfect idx for val.
        sort(begin(events), end(events));

        memset(t, -1, sizeof(t));

        int cnt{0};
        return solve(events, 0, cnt);

    }
};