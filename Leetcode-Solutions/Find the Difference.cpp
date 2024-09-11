class Solution {
public:
    char findTheDifference(string s, string t) {
        // /*using map s.c = O(n)*/
        // unordered_map<char, int>mpp;

        // //freq of s string
        // for(auto &ch : s) mpp[ch]++;

        // for(auto &ch : t){
        //     mpp[ch]--;

        //     if(mpp[ch] < 0) return ch;
        // }
        // return -1;

        // /*using the diff of their sum t.c = o(n) && s.c = O(1)*/
        // int sum_s{0}, sum_t{0};

        // //calculating the char sum of each str
        // for(auto &ch : s) sum_s += ch;
        // for(auto &ch : t) sum_t += ch;

        // // sum_t > sum_s
        // return char(sum_t - sum_s);

        /*using the XOR*/
        int XOR=0;

        for(auto &ch : s) XOR ^= ch;
        for(auto &ch : t) XOR ^= ch;

        return char(XOR);
    }
};