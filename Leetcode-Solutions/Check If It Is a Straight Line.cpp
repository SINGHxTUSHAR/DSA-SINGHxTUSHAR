class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();

        int dx = coordinates[1][0] - coordinates[0][0]; //x2-x1
        int dy = coordinates[1][1] - coordinates[0][1]; //y2-y1

        for(int i=2; i<n; i++){
            //slope of the current coordinate to the first coordinate
            int _dy = coordinates[i][1] - coordinates[0][1];
            int _dx = coordinates[i][0] - coordinates[0][0];

            /*
                slope  = m = y2-y1 / x2-x1 = dy/dx

                dy/dx = _dy/_dx == dy*_dx = _dy*dx
            */
            //current slope not equal to the first coordinate slope;
            if(dy*_dx != _dy*dx) return false;
        }return true;

    }
};