class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();

        // s0 : students like circular sandwich , s1 : student like square sandwich
        int s[2] = {0};

        //student sandwiche choice
        for(auto &student : students){
            s[student]++;
        }

        for(int i=0; i<n; i++){
            //curr type of sandwiche
            int curr_sand = sandwiches[i];

            // no further sandwich is taken by any student
            if(s[curr_sand] == 0) return n-i;
            s[curr_sand]--;
        }return 0;
    }
};