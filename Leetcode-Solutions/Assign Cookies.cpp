class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //sort the g & s vector to get the greed & cookie in order
        sort(begin(g), end(g));
        sort(begin(s), end(s));

        int m = g.size();
        int n = s.size();

        int i{0}, j{0};
        while(i < m && j < n){
            //satisfied : required <= available
            if(g[i] <= s[j]){
                i++; // move to next child
            }j++; // increase the pos of cookie for next check
        }return i;
    }
};