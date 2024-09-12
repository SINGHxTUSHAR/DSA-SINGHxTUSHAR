class Solution {
public:
    int numberOfMatches(int n) {
       /* T.c = O(log n)*/
        // int match{0};
        // while(n != 1){
        //     //team is even
        //     if(n%2==0){
        //     match += n/2;
        //     n = n/2;
        //     }else{
        //         //team is odd
        //         match += (n-1)/2; 
        //         n = (n-1)/2 + 1; 
        //     }
        // }return match;


        /* T.c = O(1)*/
        // since there is only one winner
        // total teams = n
        // total losser = n-1 = eliminated
        return n-1;
    }
};