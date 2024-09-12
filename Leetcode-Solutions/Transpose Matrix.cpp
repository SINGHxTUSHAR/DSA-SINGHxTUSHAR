class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        /* T.C = O(n*n)*/
        int m = matrix.size();
        int n = matrix[0].size();
        
        // 2D VECTOR to store the transpose of matrix
        vector<vector<int>> ans(n, vector<int>(m));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[j][i] = matrix[i][j];
            }
        }return ans;

        // /* if the matrix is square*/
        // for(int i=0; i<m; i++){
        //     for(int j=i+1; j<n; j++){
        //         swap(matrix[i][j], matrix[j][i]);
        //     }
        // }
    }
};