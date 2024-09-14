class Solution {
public:
    bool isPathCrossing(string path) {
       unordered_set<string> st;

       int x{0}, y{0};

       //visited origin(0,0)
       string key = to_string(x) +"_" + to_string(y);
       st.insert(key); 

       for(auto &ch : path){
        if(ch == 'N') y++;
        else if(ch == 'E') x++;
        else if(ch == 'W') x--;
        else y--;

        //update teh curr pos.
        key = to_string(x) +"_" + to_string(y);

        //current node already visited
        if(st.find(key) != st.end()) return true;
        // if not visited then, mark the visit
        st.insert(key);
       }return false;
    }
};