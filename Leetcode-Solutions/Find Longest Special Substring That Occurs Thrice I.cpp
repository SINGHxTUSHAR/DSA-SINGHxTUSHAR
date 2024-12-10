class Solution {
public:
    int maximumLength(string s) {
        /*T.C = O(n*3)*/
        int  n = s.length();
        // stores all possible special substr
        unordered_map<string, int>mp;

        // O(n*3)
        for(int i=0; i<n; i++){ //O(n)
            string curr_str = "";
            //finding all possible special substr
            for(int j=i; j<n; j++){ // O(n)
                if(curr_str.empty() || curr_str.back() == s[j]){
                    curr_str.push_back(s[j]);
                        mp[curr_str]++; // O(n) : as len of curr_str ~ O(n)
                }else{
                    break;
                }
            }
        }

        int ans = 0;
        for(auto &it : mp){
            int cnt = it.second;
            string str = it.first;
            // len of substr is amx and ferq > 3
            if(cnt >= 3 && str.length() > ans){
                ans = str.length();
            }
        }

        return ans == 0 ? -1 : ans;
    }
};