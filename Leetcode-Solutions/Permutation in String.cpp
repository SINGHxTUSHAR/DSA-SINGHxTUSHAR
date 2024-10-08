/*Approach-1 || cpp || T.C = O(n) || S.C = o(26)~O(1)*/
// class Solution {
// private:
//        bool checkEqual( int a[26] , int b[26] ){
//            for(int i=0; i<26; i++){
//                if( a[i] != b[i] ){
//                    return 0;
//                }
//            }return 1;
//        }

// public:
//     bool checkInclusion(string s1, string s2) {

//         //character count array in s1
//         int count1[26] {0};

//         for(int i=0; i<s1.length(); i++){
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         //traverse s2 string in window of size s1
//         int i = 0;
//         int windowsize = s1.length();
//         int count2[26] {0};

//         //running first window of s1 in s2
//         while(i<windowsize && i<s2.length()){
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }

//         if(checkEqual( count1 , count2 )){
//             return 1;
//         }

//         //processing the further window
//         while(i<s2.length()){
//             //adding the new element to the window
//             char newchar = s2[i];
//             int index = newchar - 'a';
//             count2[index]++;

//             //deleting the old element from the window
//             char oldchar = s2[i-windowsize];
//             index = oldchar - 'a';
//             count2[index]--;

//             //updating the element position
//             i++;

//             if(checkEqual(count1,count2)){
//                 return 1;
//             }

//         }return 0;
        
//     }
// };

/************************************************************************/

class Solution {
public:
    /***************************************************************/
    // int n;
    // int result;
    /*TLE*/
    /*factorial fun() || T.C = O(n! * n)*/
    // void solve(int idx, string s1, string s2){
    //     if(idx == n){
    //         if(s2.find(s1) != string::npos) result = true;
    //         return;
    //     }

    //     for(int i = idx; i<n; i++){
    //         swap(s1[i], s1[idx]);
    //         solve(idx+1, s1, s2);
    //         swap(s1[i], s1[idx]);

    //         if(result == true) return;
    //     }
    // }
    /*********************************************************************/

    bool checkInclusion(string s1, string s2) {
        // n = s1.length();
        // result = false;
        // solve(0, s1, s2);
        // return result;

        /*****************************************************************/
        // Approach - 2 ||  T.C = O(m-n) * (nlogn) || S.C = O(1)
        // int n = s1.length();
        // int m = s2.length();

        // if(n > m) return false;

        // sort(begin(s1), end(s1));

        // for(int i = 0; i <= m-n; i++){
            
        //     //sub-string of size n from i
        //     string substr = s2.substr(i, n);

        //     sort(begin(substr), end(substr));

        //     //if sub-str of s2 contains permutation of s1   
        //     if(s1 == substr) return true;
        // }return false;   


        /**********************************************************************/
        //uisng the slinding window || T.C = O(m+n) || S.C = O(1)
        int n = s1.length();
        int m = s2.length();

        if(n > m) return false;

        vector<int> s1_freq(26, 0);
        vector<int> s2_freq(26, 0);

        //freq arr of s1
        for(auto &ch : s1) s1_freq[ch-'a']++;

        int i{0}, j{0};
        while(j < m){

            s2_freq[s2[j] - 'a']++;

            // shrink the window
            if(j-i+1 > n){
                s2_freq[s2[i]-'a']--;
                i++;
            }
            //if permutation is present 
            if(s1_freq == s2_freq) return true;
            j++;
        }return false;
    }
};