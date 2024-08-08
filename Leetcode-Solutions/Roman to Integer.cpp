class Solution {
public:
    int romanToInt(string s) {
        //map the roman to its corresponding value in int
        unordered_map<char, int>mpp{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans{0};
        for(int i=0; i<s.size(); i++){
            // roman principle
            //if the curr roman letter is less than the upcoming letter: sub it
            if(mpp[s[i]] < mpp[s[i+1]]) ans -= mpp[s[i]];
            else ans += mpp[s[i]];
        }return ans;
    }
};