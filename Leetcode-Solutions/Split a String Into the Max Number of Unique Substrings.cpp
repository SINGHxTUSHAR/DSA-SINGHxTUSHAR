class Solution {
public:
    /*T.C = O(N * 2^N) || S.C = O(N)*/
    void solve(string s, int i, unordered_set<string> &st, int currCount, int &maxCount){
        if(currCount + (s.length() - i) <= maxCount) return;
        
        //UPDATE MAXCOUNT
        if(i >= s.length()){
            maxCount = max(maxCount, currCount);
            return ;
        }

        // classic BT TEMPLATE
        for(int j=i; j<s.length(); j++){
            string sub = s.substr(i, j-i+1);
            if(st.find(sub) == st.end()){
                st.insert(sub); //DO
                solve(s, j+1, st, currCount+1, maxCount); //EXPLORE
                st.erase(sub); //UNDO
            }
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        int maxCount{0}, currCount{0};
        int i = 0;

        // WILL GET THE BEST POSS SOLUTION:
        solve(s, i, st, currCount, maxCount);

        return maxCount;
    }
};