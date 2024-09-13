class Solution {
public:
    int maxScore(string s) {
        int n = s.length();

        /* T.C = O(n*m) || m = length of largest sub-str*/
        // int result = INT_MIN;

        // //traverse upto an optimal point : i
        // for(int i=0; i<n-1; i++){

        //     //counting no. of 0's from 0 to i :
        //     int zero_cnt{0};
        //     for(int j=0; j<=i; j++){
        //         if(s[j] == '0') zero_cnt++; 
        //     }

        //     //counting no. of 1's from i+1 to n-1
        //     int one_cnt{0};
        //     for(int j=i+1; j<n; j++){
        //         if(s[j] == '1') one_cnt++;
        //     }

        //     //update the summation: max
        //     result = max(result, zero_cnt + one_cnt);
        // }return result;

        /*******************************************************************************************/

        /* T.C = O(n) || two-pass*/
        //calculating the no. of 1's before part. the sub-str
        // int total_one = count(begin(s), end(s), '1'); // O(n)

        // int zero_cnt{0}, curr_one{0}, result{INT_MIN};
        
        // //traversing & partition at optimal point: i to max sum of 0's & 1's
        // for(int i=0; i<n-1; i++){
        //     //cal left 0's & 1's
        //     if(s[i] == '1') curr_one++;
        //     else zero_cnt++;

        //     //1's in right = total_one - curr_one
        //     int right_one = total_one - curr_one;

        //     result = max(result, right_one + zero_cnt);
        // }return result;

        /********************************************************************************************/

        /*one pass || T.C = O(n)*/
        // since score = left_zero + right_onet;
        // total_one = left_one + right_one; || put this eq in 1st eq
        // score = left_zero + (total_one - left_one) == (left_zero - left_one) + total_one
        // ************************* score = (left_zero - left_one) + total_one ******************************

        int left_zero{0}, total_one{0}, left_one{0}, result{INT_MIN};

        for(int i=0; i<n-1; i++){
            //count 1's & 0's
            if(s[i] == '1') left_one++;
            else left_zero++;

            result = max(result, left_zero - left_one);
        }
        // at the end of loop left_one = total_one - s[n-1]
        total_one = left_one;
        if(s[n-1] == '1') total_one++;
        return result + total_one;
    }
};