class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.length();

        /*T.C = O(n) || S.C = O(n)*/
        // //stores the indices of the max right ele of num
        // vector<int> maxRight(n);

        // maxRight[n-1] = n-1;

        // //pre-processing for finding max_ele at each idx for right pos
        // for(int i=n-2; i>=0; i--){
        //     int rightMaxIdx = maxRight[i+1];
        //     int rightMaxEle = s[rightMaxIdx];

        //     //idx of right_largest_ele at i:
        //     maxRight[i] = (s[i] > rightMaxEle) ? i : rightMaxIdx;
        // }

        // // comparing the s[i] & maxRight[i], swapping the largest ele at MSP from the right side(LSP):
        // for(int i=0; i<n; i++){
        //     int maxRightIdx = maxRight[i];
        //     int maxRightEle = s[maxRightIdx];

        //     if(s[i] < maxRightEle){
        //         swap(s[i], s[maxRightIdx]);
        //         return stoi(s);
        //     }
        // }return num;


        /*Approach-2 || using the constant arr[10] */
        // T.C = O(n) || S.C = O(1)
        vector<int> maxRight(10, -1);

        for(int i=0; i<n; i++){
            int idx = s[i] - '0';
            maxRight[idx] = i;
        }

        for(int i=0; i<n; i++){
            char currChar = s[i];
            int currDigit = currChar - '0';

            //checking at each digit fro 9-0
            for(int digit = 9; digit > currDigit; digit--){
                // swap if digit at MSP > digit at LSP
                if(maxRight[digit] > i){
                    swap(s[i], s[maxRight[digit]]);
                    return stoi(s);
                }
            }
        }return num;

    }
};