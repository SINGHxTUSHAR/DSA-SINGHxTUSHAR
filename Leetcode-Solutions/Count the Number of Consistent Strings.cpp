class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //set to store the allowed char's ch
        unordered_set<char> s;
        for(auto &ele : allowed) s.insert(ele);

        int cnt{0};
        for(auto &word : words){
            bool status = true;

            for(auto &ch : word){
                // if allowed char ch is not present in word of words
                if(s.find(ch) == s.end()){
                    status = false;
                    break;
                } 
            }
            // good word is present in words
            if(status == true) cnt++;
        }return cnt;
    }
};