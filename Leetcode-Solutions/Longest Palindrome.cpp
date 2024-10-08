class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();

        /*T.C = O(n) || S.C = O(n)*/
        // unordered_set<char> st;
        // int result{0};

        // for(auto &ch : s){
        //     // if repetative ch found, remove from st & add to result in pair
        //     if(st.count(ch)){
        //         result += 2;
        //         st.erase(ch);
        //     }else{
        //         st.insert(ch);
        //     }
        // }
        // //odd length palindrome
        // if(!st.empty()) result++;
        // return result;
        /****************************************************************/

        // uisng the unordered_map
        unordered_map<char, int> mp;
        for(auto &ch : s) mp[ch]++;

        int result{0};
        bool oddFreq = false;

        //iterate in map & check for freq
        for(auto &it : mp){
            if(it.second % 2 == 0) result += it.second;
            else{
                result += it.second - 1;
                oddFreq = true;
            }
        }
        //checking for odd palindrome
        if(oddFreq) result++;

        return result;
    }
};