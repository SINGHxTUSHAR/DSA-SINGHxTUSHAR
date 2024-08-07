class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";
        int n = strs.size();
        // to traverse in the first str
        for(int i=0; i<strs[0].length(); i++){
            char ch = strs[0][i];  //selecting the char's of 1st str
            bool match = true;

            //traversing in the strs
            for(int j=1; j<n; j++){
                if(ch != strs[j][i] || strs[j].size() < i){
                    match = false;
                    break;
                }
            }
            if(match == false){
                break;
            }else ans.push_back(ch);
        }return ans;
    }
};