class Solution {
public:
    string reverseParentheses(string s) {


        /* T.C = O(n*n) , since reversing n brackets n times
           S.C = O(n) , due to the stack auxiliary space*/

        stack<char>st;
        //iterate over the string
        for( auto ele : s){
            //push data in stack , opening bracket
            if(ele == '('){
                st.push(ele);
            }else if(ele == ')'){
                //if bracket is close, then fetch the in-between data and reverse it
                //data is automatically reverse, when comming out of stack
                string temp = "";
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }st.pop();
                //push the data back to the stack
                for(auto ch : temp) st.push(ch);
            }else{
                st.push(ele);
            }
        }
        
        //now stack has the answer value but when we take that out, it will be reversed,
        //due to stack property {LIFO}
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        //reverse the ans
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};


//LINK: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/solutions/5460309/description-c-reverse-substrings-between-each-pair-of-parentheses-optimized-c