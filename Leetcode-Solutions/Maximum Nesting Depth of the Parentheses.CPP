class Solution {
public:
    int maxDepth(string s) {
        /*T.C = O(n) & S.C = O(n)*/
        // stack<char> st;
        // int ans{0};

        // for(auto &ch : s){

        //     if(ch == '(') st.push(ch);
        //     else if(ch == ')') st.pop();

        //     ans = max(ans, (int)st.size());
        // }return ans;

        /* T.C = O(n) & S.C = O(1)*/
        int openBracket{0}, ans{0};

        for(auto &ch : s){
            if(ch == '(') openBracket++;
            else if(ch == ')') openBracket--;

            ans = max(ans, openBracket);
        }return ans;
        
    }
};