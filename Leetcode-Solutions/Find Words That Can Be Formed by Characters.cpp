class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        //to store the freq of char in str chars
        vector<int> charCount(26,0);

        //calculate the freq of char in str chars
        for(auto &ch : chars) charCount[ch-'a']++;

        
        //stores the total length of possible words
        int result{0}; 
        for(auto &word : words){
            
            //to calculate the word freq
            vector<int> wordCount(26,0);
            for(auto &ch : word) wordCount[ch-'a']++;

            bool possible = true;
            for(int i=0; i<26; i++){
                if(wordCount[i] > charCount[i]){
                    possible = false;
                    break;
                }
            }
            //if word is good then add it's length
            if(possible == true) result += word.length(); 
        }return result;
    }
};