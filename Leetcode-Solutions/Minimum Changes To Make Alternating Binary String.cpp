class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        //to store the freq for format
        int start_with_0{}, start_with_1{};

        /*format*/
        // 01010101.... even-0 odd-1
        // 10101010.... even-1 odd-0
        for(int i=0; i<n; i++){
            if(i%2 == 0){ //even pos
                if(s[i] == '0') start_with_0++;
                if(s[i] == '1') start_with_1++;
            }else{ //odd pos
                if(s[i] == '0') start_with_1++;
                if(s[i] == '1') start_with_0++;
            }
        }
        /*approach-2*/
        // start_with_0 is compliment of start_with_1
        // start_with_1 = n-start_with_0;

        return min(start_with_0, start_with_1);
    }
};