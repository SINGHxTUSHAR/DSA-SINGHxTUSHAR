class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        /* T.C = O(n) || brute force*/
        vector<int> count(26, 0);

        for(auto &ch : s) count[ch-'a']++; //O(n)

        string result;
        int i = 25;

        while(i >= 0){ //O(n)
            //freq id 0 : skip & find next max_ele
            if(count[i] == 0){
                i--;
                continue;
            }
            //lexicographical max char
            char ch = 'a' + i; 
            int freq = min(count[i], repeatLimit);

            result.append(freq, ch);
            count[i] -= freq;

            //next largest ele : to break the repeat chain
            if(count[i] > 0){
                int j = i-1;
                while(j >= 0 && count[j] == 0){ //O(26) ~ O(1)
                    j--;
                }
                if(j < 0) break; // no second largest char

                result.push_back('a' + j);
                count[j]--;
            }
        }return result;
    }
};