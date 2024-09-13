class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        // unordered_map<string, int>mp;

        // //traverse to mark the outgoing edges as 1
        // for(auto &path : paths){
        //     string source = path[0];
        //     // outgoing edge
        //     mp[source] = 1;
        // }

        // for(auto &path : paths){
        //     string dest = path[1];

        //     //No outgoing path : means the pos is final dest.
        //     if(mp[dest] != 1) return dest;
        // }return "";

        /*using the set*/
        unordered_set<string>st;

        for(auto &path : paths){
            string src = path[0];
            //push the outgoing edges in set st:
            st.insert(src);
        }

        for(auto &path : paths){
            string dest = path[1];

            //set st doesn't have dest : means no outgoing edge : final dest
            if(st.find(dest) == st.end()) return dest;
        }return "";
    }
};