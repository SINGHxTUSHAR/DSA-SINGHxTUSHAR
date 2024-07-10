/*Author: TUSHAR SINGH*/

class Solution {
public:
    int minOperations(vector<string>& logs) {


        // /* T.C = O(n) , since traversing the logs*/
        
        // //creating the stack to store the current directory after performing operations
        // stack<string>s;

        // //performing operations
        // for(auto ele : logs){
        //     if(ele == "../"){
        //         //Go back to the parent folder
        //         if(!s.empty()) s.pop();
        //         //if already in parent folder || operation = ./ then do nothing, else
        //     }else if(ele != "./"){
        //         //push or perform the operation {add the directory to stack}
        //         s.push(ele.substr(0,ele.size()-1));
        //     }
        // }
        // //no. of steps will be answer
        // return s.size();

        
        /* T.C = O(n) but space is optimized , S.C = O(1) since no extra auxiliary space*/ 
        //count var to caount the no. of steps
        int cnt{};
        for(auto op : logs){
            //back to the parent dir
            if(op == "../"){
                // not in main, back to parent dir
                if(cnt > 0) cnt--;
             // some operation has to perform, count the operations
            }else if(op != "./") cnt++;
        }return cnt;
    }
};

//LINK: https://leetcode.com/problems/crawler-log-folder/solutions/5455410/crawler-log-folder-optimized-c

