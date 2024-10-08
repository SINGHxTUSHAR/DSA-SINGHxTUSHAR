class Solution {
public:
    int minSwaps(string s) {
        /*using stack || T.C = O(n) || S.C = O(n)*/
        // stack<char> st;
        
        // for(char &ch : s){
    
        //     if(ch == '[') st.push(ch);
        //     //means ch == ], hence their is balanced str, pop curr_ch
        //     else if(!st.empty()) st.pop();
        // }return (st.size()+1)/2;

        //using size var
        int size = 0;
        for(auto &ch : s){
            if(ch == '[') size++;
            else if(size > 0) size--;
        }return (size+1)/2;
    }
};