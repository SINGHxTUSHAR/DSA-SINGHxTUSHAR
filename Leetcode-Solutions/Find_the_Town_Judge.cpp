/*Author: TUSHAR SINGH*/

// Intuition:
// Since we know that Town Judge trust no ones which means its outDegree(trust toward some one else) will be zero and Everyone trust him/her(means its inDegree will be n-1).

// Approach:
// * Define two vectors which will have inDegree and outDegree.
// * inDegree means number of people trust current person which will be at 1st index of trust.
// * outDegree means number of people this person trust which will be at the 0th index of trust.
// * Traverse over the trust arr and calculate the inDegree and outDegree.
// * Desig a loop to iterate over the n ele and if its inDegree is equal to n-1 and outDegree is equal to 0, then it is Town judge and return the current ele.
// * Else return -1, which represent that their is no Town judge.

// Complexity:
// Time complexity: O(n)
// Since we are traversing over n ele of trust arr.
// Space complexity: O(n)
// As we are calculating and storing the degree in a vector.

// Code:  /*NOTE: comment out one of approaches down below:*/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
    
    /*Approach with T.C = 0(n+n) & S.C = O(n*n)*/

    //vector to store the in & out degree
    vector<int>inDegree(n+1, 0) , outDegree(n+1, 0);
    //cal the degree of ele 
    for(auto ele : trust){
        outDegree[ele[0]]++;
        inDegree[ele[1]]++;  
    }
    
    //condition for town judge
    for(int i=1 ; i<=n; i++){
        if(inDegree[i]==n-1 && outDegree[i]==0) return i; 
    }return -1;

    /*************************************************************************************************************/

    /*Approach with T.C = 0(n+n) & S.C = O(n)*/
    /*In this approach or method we have merge the inDegree and outDegree vector and define a single vector called
      degree which will be used as by this space will be reduced drom n*n to only n*/

    vector<int>degree(n+1, 0);

    for(auto ele : trust){
        degree[ele[0]]--; //outDgree
        degree[ele[1]]++; //inDegree
    }

    for(int i=1; i<=n; i++){
        if(degree[i]==n-1) return i;
    }
    //if no town judge is present
    return -1;

    }
};

//LINK: https://leetcode.com/problems/find-the-town-judge/solutions/4766468/find-the-town-judge-cpp-detail-explanation-beats-95