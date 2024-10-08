class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // //create a new n*n matrix
        // vector<vector<int>>dummy(n, vector<int>(n, 0));

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){

        //         dummy[j][n-i-1] = matrix[i][j];
        //     }
        // }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         matrix[i][j] = dummy[i][j];
        //     }
        // }

        /*with transpose & reverse*/
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){

                //transpose
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse each row
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

//LINK: https://leetcode.com/problems/rotate-image/solutions/5541889/optimal-c