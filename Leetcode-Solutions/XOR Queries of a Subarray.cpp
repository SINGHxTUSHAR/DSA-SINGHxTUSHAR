class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();

        //to store the cummilative XOR
        vector<int>cumXor(n, 0);

        //cummilative XOR upto that point
        cumXor[0] = arr[0];
        for(int i=1; i<n; i++){
            cumXor[i] = cumXor[i-1] ^ arr[i];
        }

        vector<int> result;
        for(vector<int>& query : queries){
            int l = query[0];
            int r = query[1];
            // X : A-B = X ;
            // XOR the know index to get the required xor
            int xor_val = cumXor[r] ^ (l == 0 ? 0 : cumXor[l-1]);

            result.push_back(xor_val);
        }return result;

    }
};