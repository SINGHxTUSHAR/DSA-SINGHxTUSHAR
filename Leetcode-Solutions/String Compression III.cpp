class Solution {
public:
    string compressedString(string word) {
       int n = word.length();
    
       // T.C = O(n) & S.C = O(1)
       string comp = "";
       int i = 0;

       while(i < n){
        int cnt = 0;
        char ch = word[i];
        
        while(cnt < 9 &&  word[i] == ch && i < n){
            i++;
            cnt++;
        }

        comp += to_string(cnt) + ch;
       } 
       return comp;
    }
};