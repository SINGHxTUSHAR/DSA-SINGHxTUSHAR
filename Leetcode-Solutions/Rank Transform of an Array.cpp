class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        /*TWO PASS SOLUTION || T.C = O(n) || S.C = O(n)*/
        int n = arr.size();

        //no element
        if(n == 0) return {};

        //set to store the unique ele in sorted order
        set<int> unique_ele(begin(arr), end(arr));
        unordered_map<int, int> ranks;
        int rank = 1; //rank starts from 1

        //update the ranks
        for(auto &ele : unique_ele){
            ranks[ele] = rank++;
        }
        
        //update the ranks of ele of arr at their pos
        vector<int>ans;
        for(auto &ele : arr){
            ans.push_back(ranks[ele]);
        }return ans;
    }
};