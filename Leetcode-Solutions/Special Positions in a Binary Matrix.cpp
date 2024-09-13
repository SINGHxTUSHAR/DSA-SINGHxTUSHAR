class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int cnt{0};

        /* T.C = O{(m*n)+(m+n)}*/
        // for(int row=0; row<m; row++){
        //     for(int col=0; col<n; col++){

        //         if(mat[row][col] == 0) continue;
                
        //         bool special = true;
        //         //checking in col for extra 1's
        //         for(int r=0; r<m; r++){
        //             if(r != row && mat[r][col] == 1){
        //                 special = false;
        //                 break;
        //             } 
        //         }
        //         //checking in row for extra 1's
        //         for(int c=0; c<n; c++){
        //             if(c != col && mat[row][c] == 1){
        //                 special = false;
        //                 break;
        //             }
        //         }
        //         //Their is a special position for mat[i][j]
        //         if(special == true) cnt++;
        //     }
        // }return cnt;
        
        //to store the count of 1's in row & col
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);

        //traversing in mat, update the 1's
        for(int row=0; row<m; row++){
            for(int col=0; col<n; col++){

                //update the 1 in count arr
                if(mat[row][col] == 1){
                    rowCount[row]++;
                    colCount[col]++;
                }
            }
        }

        //traverse in mat & check if their is only one 1's = special pos:
        for(int row=0; row<m; row++){
            for(int col=0; col<n; col++){

                if(mat[row][col] == 0) continue;

                //if their is only one 1's in row & col, then it is special
                if(rowCount[row] == 1 && colCount[col] == 1) cnt++;
            }
        }return cnt;
    }
};