class Solution {
public:

    // returns the maxvalue in the sub-matrix of 3*3
    int findLocalMax(vector<vector<int>> &grid, int row, int col){
        int maxValue = INT_MIN;

        for(int x = row; x <= row+2; x++){
            for(int y = col; y <= col+2; y++){
               maxValue = max(maxValue, grid[x][y]); 
            }
        }return maxValue;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<vector<int>> maxLocal(n-2, vector<int>(n-2));

        //selecting the sub-matrix of 3*3 & pushing it's max into maxLocal of (n-2)*(n-2)
        for(int row = 0; row < n-2; row++){
            for(int col = 0; col < n-2; col++){
                maxLocal[row][col] = findLocalMax(grid, row, col);
            }
        }return maxLocal;
    }
};