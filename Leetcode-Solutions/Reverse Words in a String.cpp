class Solution {
public:
    string reverseWords(string s) {
        // stringstream ss(s);

        // string ans;
        // string token;

        // while(ss >> token){
        //     ans = token + " " + ans;
        // }return ans.substr(0, ans.length()-1);

        
        /*without direct entity || two pointer approach*/
        //reverse initial str s
        reverse(s.begin(), s.end());

        // 'i' to iterate && 'l' & 'r' pointer to swap
        int l{0}, r{0} , i{0};

        while(i < s.length()){
            while(i < s.length() && s[i] != ' '){
                s[r++] = s[i++];
            }
            //swap the word b/w the l & r
            if(l < r){
                reverse(s.begin()+l, s.begin()+r);
                s[r] = ' '; //assign the space after each word
                r++;
                l=r;
            }
            i++;
        } s = s.substr(0, r-1); //cutout the extra space at the end
        return s;
    }
};

//LINK: https://leetcode.com/problems/reverse-words-in-a-string/solutions/5588235/beast-100-two-pointer-approach-cpp-optimal-string-reverse-word-c