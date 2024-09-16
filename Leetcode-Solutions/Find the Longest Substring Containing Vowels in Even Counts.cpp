class Solution {
public:
    int findTheLongestSubstring(string s) {

        /* T.C = O(n)*/
        // unordered_map<string, int> mp;

        // vector<int> state(5 ,0); //a,e,i,o,u

        // string currState = "00000"; 
        // mp[currState] = -1; //starting pos

        // int result{0};
        // for(int i=0; i<s.length(); i++){
        //     //check the curr ch in string s & update the state
        //     // if(s[i] == 'a') state[0] = (state[0] + 1) % 2;
        //     // else if(s[i] == 'e') state[1] = (state[1] + 1) % 2;
        //     // else if(s[i] == 'i') state[2] = (state[2] + 1) % 2;
        //     // else if(s[i] == 'o') state[3] = (state[3] + 1) % 2;
        //     // else if(s[i] == 'u') state[4] = (state[4] + 1) % 2;
        //     //since a^a = 0 : for n(a) = even;
        //     if(s[i] == 'a') state[0] = (state[0] ^ 1);
        //     else if(s[i] == 'e') state[1] = (state[1] ^ 1);
        //     else if(s[i] == 'i') state[2] = (state[2] ^ 1);
        //     else if(s[i] == 'o') state[3] = (state[3] ^ 1);
        //     else if(s[i] == 'u') state[4] = (state[4] ^ 1);

        //     //update the currState and convert it to string
        //     currState ="";
        //     for(int j=0; j<5; j++){  // O(1)
        //         currState += to_string(state[j]); 
        //     }

        //     // check whether this currState is seen in past or not
        //     if(mp.find(currState) != mp.end()) result = max(result, i - mp[currState]);
        //     else mp[currState] = i; // if not, then update the state
        // }return result;

        /*uisng the bit-manipulation*/
        unordered_map<int, int> mp;

        int mask = 0; //00000
        mp[mask] = -1;

        int result{0};
        for(int i=0; i<s.length(); i++){
            //left shift the char's as per their pos {a,e,i,o,u} = {0,1,2,3,4}
            if(s[i] == 'a') mask = (mask ^ (1 << 0));
            else if(s[i] == 'e') mask = (mask ^ (1 << 1));
            else if(s[i] == 'i') mask = (mask ^ (1 << 2));
            else if(s[i] == 'o') mask = (mask ^ (1 << 3));
            else if(s[i] == 'u') mask = (mask ^ (1 << 4));


            // check whether this mask is seen in past or not
            if(mp.find(mask) != mp.end()) result = max(result, i - mp[mask]);
            else mp[mask] = i; // if not, then update the state
        }return result;
    }
};