class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int>ans;
        int m = matrix.size(); //no. of rows
        int n = matrix[0].size(); //no. of col

        int top{0}, left{0}, right=n-1, bottom=m-1;

        while(top <= bottom && left <= right){

            //moving left to right
            for(int i=left; i<=right; i++) ans.push_back(matrix[top][i]);
            top++; //move to next row

            //moving top to bottom
            for(int i=top; i<=bottom; i++) ans.push_back(matrix[i][right]);
            right--; //move to prev col

            //moving right to left
            if(top <= bottom){ //condition to check single row matrix
                for(int i=right; i>=left; i--) ans.push_back(matrix[bottom][i]);
                bottom--; //move to prev row
            }
            
            //moving bottom to top
            if(left <= right){ //condition to check single col matrix
                for(int i=bottom; i>=top; i--) ans.push_back(matrix[i][left]);
                left++; //move to next col
            }

        }return ans;
        
    }
};

//LINK: https://leetcode.com/problems/spiral-matrix/solutions/5542136/c