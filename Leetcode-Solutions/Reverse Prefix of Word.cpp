class Solution {
public:
    string reversePrefix(string word, char ch) {
        /*using STL || T.C = O(n) || S.C = O(1)*/
    //    //find the index of ch
    //    int j = word.find(ch);
    //    reverse(begin(word), begin(word)+j+1);
    //    return word; 

        int j = word.find(ch);
        int  i = 0;
        while(i < j){
            swap(word[i], word[j]);
            i++;
            j--;
        }return word;
    }
};