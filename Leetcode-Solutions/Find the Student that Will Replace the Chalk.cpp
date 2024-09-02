class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // since k <= 1e9, reduce it to its smallest
        long sum = 0;
        //calculate the total chalk required in one cycle
        for(auto &ele : chalk){
            sum += ele;
        }
        //dividing the k with total chalk required in n cycle, will give remain chalk
        k = k % sum;
        
        for(int i=0; i<chalk.size(); i++){
            int _k = k - chalk[i]; // _k = remaining chalk
            k = _k;
            if(_k < 0) return i;
        }return -1;
    }
};