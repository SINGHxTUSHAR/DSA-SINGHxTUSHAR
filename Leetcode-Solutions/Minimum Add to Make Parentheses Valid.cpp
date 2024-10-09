class Solution {
public:
    int minAddToMakeValid(string s) {

        /*T.C = O(n) || S.C = O(1)*/
        int size = 0;
        int openBracket = 0;

        //iterate & update the size & open bracket cnt
        for(char &ch : s){
            //if curr ch is '('
            if(ch == '(') size++;

            //else ch = ')', if their is '(' then pop()
            else if(size > 0) size--;

            //else their is close bracket & no openBracket, then add openbracket
            else openBracket++;
        }return size + openBracket;
    }
};