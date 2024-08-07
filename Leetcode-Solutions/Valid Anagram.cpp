class Solution {
public:
    bool isAnagram(string s, string t) {
        /*sort & compare*/
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if(s==t) return true;
        // return false;

        vector<int>cnt(26, 0);

        for(auto &ch : s){
            //counting ele in s string
            cnt[ch-'a']++;
        }
        for(auto &ch : t){
            //removing the elements from the t string
            cnt[ch-'a']--;
        }
        //if the cnt has all zeors, means s & t have same ch //anagram
        //lambda fun()
        bool allZeros = all_of(begin(cnt), end(cnt), [](int ele){
            return ele == 0;
        });

        return allZeros;
    }
};