class Solution {
public:
    int maximumLength(string s) {
        /*T.C = O(n*3)*/
        // int  n = s.length();
        // // stores all possible special substr
        // unordered_map<string, int>mp;

        // // O(n*3)
        // for(int i=0; i<n; i++){ //O(n)
        //     string curr_str = "";
        //     //finding all possible special substr
        //     for(int j=i; j<n; j++){ // O(n)
        //         if(curr_str.empty() || curr_str.back() == s[j]){
        //             curr_str.push_back(s[j]);
        //                 mp[curr_str]++; // O(n) : as len of curr_str ~ O(n)
        //         }else{
        //             break;
        //         }
        //     }
        // }

        // int ans = 0;
        // for(auto &it : mp){
        //     int cnt = it.second;
        //     string str = it.first;
        //     // len of substr is amx and ferq > 3
        //     if(cnt >= 3 && str.length() > ans){
        //         ans = str.length();
        //     }
        // }

        // return ans == 0 ? -1 : ans;


        /******************************************************************************/
        /*T.C = O(n*2)*/
        int n = s.length();
        //map of pair of (ch, int) with its freq(int):
        map<pair<char, int>, int>mp;

        for(int i=0; i<n; i++){
            char ch = s[i]; //curr_char ch
            int l = 0; // length of curr ch

            for(int j=i; j<n; j++){
                if(s[j] == ch){
                    l++;
                    mp[{ch, l}]++; // update the freq for each valid substr
                }else{
                    break;
                }
            }
        }

         int result = 0;
            for(auto &it : mp){
                int len =  it.first.second; //len of char ch
                int freq = it.second; //freq of valid substr in mp

                if(freq >=3 && len > result){
                    result = len;
                }
            } 
        return result == 0 ? -1 : result;
    }
};