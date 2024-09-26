class Solution {
public:
    bool makeEqual(vector<string>& words) {
      int n = words.size();
    /*Approach-1*/
    //   //we can also use the arr[26], since only lower case char ch
    //   unordered_map<char, int>mp;
    //   // cal the freq of each char
    //   for(auto &word : words){
    //     for(char &ch : word) mp[ch]++;
    //   }  

    //   for(auto &it : mp){
    //     int freq = it.second;
    //     // char's are not evenly distributed
    //     if(freq % n != 0) return false;
    //   }return true;

    /*Approach-2*/
        int count[26] = {0};
        for(string &word : words){
            for(char &ch : word) count[ch-'a']++;
        }
        
        //all char should be equally distributed
        auto lambda = [&](int freq){
            return freq % n == 0;
        };
        return all_of(begin(count), end(count), lambda);
    }
};