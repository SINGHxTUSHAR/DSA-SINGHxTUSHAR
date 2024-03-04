//Author: TUSHAR SINGH

// Intuition:
// Since we have to max our score, we will select the min token value and face-up , and if our score > 0, then we will face-down to max our power which will eventually max our score val.

// Approach:
// * Sort the tokens arr, so that we can easily select the required token values.
// * Define the var for current score, maxScore, i which will point to start of token arr and j which will be at end of token arr.
// * Traverse in the tokens till i<=j.
// * If power >= token[i], reduce power by that token value and increase the score by 1, and select the maxScore.
// * If power <= token & score > 0 , then inc the power by token and decrease the score by 1.
// * Else break, which will cover the edge case.
// * Reture the maxScore.

// Complexity:
// Time complexity: O(nlogn)
// Since we are using the sort fun of STL and also traversing in arr by brute force.
// Space complexity: O(logn , n)
// It will depend on token values as we are sorting the token arr.

// Code:
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        //sorting so that we can easily select the required token value
        sort(tokens.begin(), tokens.end());

        int maxScore{}, score{}, i{}, j=tokens.size()-1;

        //traversing over the tokens
        while(i<=j){
            if(power >= tokens[i]){
                power -= tokens[i++];
                maxScore = max(maxScore, ++score);
            }else if(score > 0){
                score--;
                power += tokens[j--];
            }else{//edge case
                break;
            }
        }return maxScore;    
    }
};

//LINK: https://leetcode.com/problems/bag-of-tokens/solutions/4822866/bag-of-tokens-c-detail-explanation-optimal-cpp
