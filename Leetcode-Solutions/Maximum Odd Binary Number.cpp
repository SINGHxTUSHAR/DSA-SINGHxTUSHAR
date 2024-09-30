class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();

        string ans = string(n, '0');

        /*using the for loop*/
        // int i = 0;
        // for(auto &ch : s){
        //     if(ch == '1'){
        //         //LSB : to make odd num, 1 at LSB
        //         if(ans[n-1] != '1') ans[n-1] = '1';
        //         else{
        //             ans[i] = '1';
        //             i++;
        //         }
        //     }
        // }return ans;

        /*using count() in STL*/
        int cnt_1 = count(begin(s), end(s), '1');
        int j = 0;
        //update the extra's one to MSB to maxi the odd num
        while(cnt_1 > 1){
            ans[j] = '1';
            j++;
            cnt_1--;
        }
        //LSB
        ans[n-1] = '1';
        return ans;
    }
};