class Solution {
public:
    int minLength(string s) {
        int n = s.length();

        int i{0}; //ptr to write the min possible sub-str
        int j{1}; //ptr to read the str s

        while(j < n){
            // if i is -ve, then increment & update the poss val at i idx
            if(i < 0){
                i++;
                s[i] = s[j];
            }
            // AB & CD : removes this char str
            else if((s[i] == 'A' && s[j] == 'B') ||
                   (s[i] == 'C' && s[j] == 'D')) i--;
            else{
                i++;
                s[i] = s[j]; // write the correct val
            }
            j++;
        }return i+1;
    }
};