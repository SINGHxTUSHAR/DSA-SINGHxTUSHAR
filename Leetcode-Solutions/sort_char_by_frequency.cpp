/*Author: TUSHAR SINGH*/

// Intuition:
// We can calculate the frequency of char of the given str and then apply some kind of sorting method to sort the char on basis of their frequency.

// Approach:
// * Calculate the frequency by designing a unordered_map which will contain the freq and char.
// * Since we know that we cannot apply sorting on the map in cpp, We have to push the data of map into something else for sorting.
// * We will define a 2d vector along the bucket sort which is most optimal for this problem as maximum a char has a freq of n.
// * Push the data in bucketData vector of vector as per freq of char.
// * Create an empty string ans.
// * Design a loop to iterate over the bucketData and append the char in ans string as per their frequency.

// Complexity:
// Time complexity: O(n)
// Since we are using bucket sort and traversing over the bucketData.
// Space complexity: O(n)
// Since we are storing and pushing n ele(chars) from the map to the vector with n+1 size.

// NOTE:
// I have also discussed more approaches of this problem in my code with define complexity.

// Code:
class Solution {
public:
    string frequencySort(string s) {

        /* Method-1  || T.C = O(nlogn) || S.C = O(logn) */

        //caluculating the frequency
        vector<int> freq(128,0);
        for(auto ch: s) freq[ch]++;

        //comparator fun to specify how the sorting will be done
        auto cmp = [&](char a, char b){
            if(freq[a] == freq[b]) return a<b;
            return freq[a] > freq[b];
        };
        //sort the given str s on basis of cmp
        sort(s.begin(),s.end(),cmp);

        return s;  
        
        /*************************************************************************************/
   
        /*Method-2 || T.C  = O(n + klogk)  || s.c = O(n) */
        //calculating the freq of char
        unordered_map<char,int>freq;
        for(auto ch : s) freq[ch]++;
        
        //pushing the has data to the pair of vector , which will be used to sort the data
        vector<pair<char,int>> freqArr;
        for(auto [ch, fq] : freq) freqArr.push_back({ch,fq});
        
        //comparator fun to check how sort will perform
        auto cmp = [&](pair<char,int>& a , pair<char,int>& b){
            return a.second > b.second;
        };
        
        sort(freqArr.begin(), freqArr.end(), cmp);

        string ans = "";
        //expansion of char to original size in sort(dec order).
        for(auto [ch, fq] : freqArr) ans.append(fq, ch);

        return ans;

        /*************************************************************************************/


        /* Method-3 || T.C  = O(n) || S.C = O(n) */
        unordered_map<char,int>freq;
        for(auto ch : s) freq[ch]++;
        
        //pushing the data from the map to the 2d vector of bucketData as per freq
        vector<vector<char>> bucketData(s.length()+1);
        for(auto [ch, fq] : freq) bucketData[fq].push_back(ch);

        string ans = "";
        //iterate over the vector of bucketData
        for(int fq=s.length(); fq>=1; fq--){
            //pushing char as per freq in ans string
            for(auto ch : bucketData[fq]) ans.append(fq, ch);
        }return ans;


    }
};

//LINK: https://leetcode.com/problems/sort-characters-by-frequency/solutions/4691239/sort-characters-by-frequency-cpp-detail-explanation-optimal-approach-beats-98