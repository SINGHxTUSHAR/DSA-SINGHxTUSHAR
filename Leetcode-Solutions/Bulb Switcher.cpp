class Solution {
public:
    int bulbSwitch(int n) {
        /*optimal approach*/
        // only the odd no. of times occurence bulb will remain ON
        // means the perfect square are the bulb will remain ON
        return sqrt(n);
    }
};