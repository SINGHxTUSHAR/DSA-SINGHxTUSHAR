class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        /*Normal concatenate the str & compare*/
        // string w1 = "";
        // for(int i=0; i<word1.size(); i++){
        //     w1 += word1[i];
        // }

        // string w2 = "";
        // for(int i=0; i<word2.size(); i++){
        //     w2 += word2[i];
        // }

        // return w1==w2;

        /*indexing approach & compare each char*/
        int m = word1.size();
        int n = word2.size();

        int w1i{0} ,i{0};
        int w2i{0}, j{0};

        while(w1i < m && w2i < n){
            if(word1[w1i][i] != word2[w2i][j]) return false;

            i++;
            j++;

            if(i == word1[w1i].length()){
                i = 0;
                w1i++;
            }
            if(j == word2[w2i].length()){
                j = 0;
                w2i++;
            }
        } if(w1i == word1.size() && w2i == word2.size()) return true;
        return false;
        
    }
};