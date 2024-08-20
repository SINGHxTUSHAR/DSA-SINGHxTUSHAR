class Solution {
public:
    int findEquationValue(pair<int, int>p1, pair<int, int>p2, pair<int, int>p3){

        int x1 = p1.first;
        int x2 = p2.first;
        int x3 = p3.first;

        int y1 = p1.second;
        int y2 = p2.second;
        int y3 = p3.second;

        return (y3-y2)*(x2-x1) - (y2-y1)*(x3-x2);
    }

    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        sort(begin(trees), end(trees));

        vector<vector<int>> ans;

        deque<pair<int, int>> upper;
        deque<pair<int, int>> lower;

        for(auto &pt : trees){
            int l = lower.size();
            int u = upper.size();

            //lower half
            while(l >= 2 && findEquationValue(lower[l-2], lower[l-1], {pt[0],pt[1]}) < 0){
                l--;
                lower.pop_back();
            }

            //upper half
            while(u >= 2 && findEquationValue(upper[u-2], upper[u-1], {pt[0],pt[1]}) > 0){
                u--;
                upper.pop_back();
            }

            upper.push_back({pt[0], pt[1]});
            lower.push_back({pt[0], pt[1]});
        }

        set<pair<int, int>>s;

        for(auto &ele : upper) s.insert(ele);
        for(auto &ele : lower) s.insert(ele);

        for(auto &it : s){
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};