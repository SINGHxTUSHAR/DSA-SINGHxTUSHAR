class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int len = original.size();
        if(len != m*n) return {}; //cann't form a 2d vector

        vector<vector<int>> ans(m, vector<int>(n));

        //index to traverse the 1D vector : original
        int idx{0};
        //traverse in 2D vector & store the ele
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = original[idx++];
            }
        }return ans;
    }
};