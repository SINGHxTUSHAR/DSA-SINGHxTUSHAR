class Solution {
public:
    string removeOuterParentheses(string s) {

        int openCnt{0};
        string ans;

        for(auto ele : s){

            if(ele == '(' && openCnt++ > 0) ans += ele;
            if(ele == ')' && openCnt-- > 1) ans += ele;
        }return ans;
        
    }
};