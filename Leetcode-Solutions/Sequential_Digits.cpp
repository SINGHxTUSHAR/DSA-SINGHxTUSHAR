// Intuition:
// * Since We have a low and high limit of digits. We will cxreate a string str which contains ("123456789") already and then select the substring from str as per range of limit.
// * After getting the sub-string we will convert it to integral and push to result vector.
// * Remember low and high are inclusive { [low,high] }.

// Approach:
// * create a ans vector and string str which contains "123456789".
// * calculate the range by converting low and high to str and then use length fun to calculate length of str, return to int var.
// * Design a loop between this range of ll(low-limit) and hl(high-limit).
// * Design another loop to select the sub-string from the str.
// * After selecting the sub-string convert it into integral value by using the stoi() fun in STL.
// * If the selected num is in the range of low and high , then push it to ans vector.

// Complexity:
// Time complexity:O(1)
// Since the value of low and high are in the range of [ 10 <= low <= high <= 10^9 ].
// Outer for loop will take constant time and the Inner for loop will also take constant amount of time to execute the operations.

// Space complexity:O(1)
// Auxiliary space used is for to store str and range in ll & hl which all takes O(1) space.
// Also the ans vector returns the limited sequential values.

// Code:
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        string str = "123456789";
        vector<int>ans;
        
        //calculated the limit of digit for upper and lower bound
        int ll = to_string(low).length();
        int hl = to_string(high).length();

        for(int i=ll; i<=hl; i++){
            for(int j=0; j<10-i; j++){
                //selecting sequential substring
                int num = stoi(str.substr(j,i));
                //checking range condition
                if(num>=low && num<=high)  ans.push_back(num);
            }
        }return ans;  
    }
};

//LINK: https://leetcode.com/problems/sequential-digits/solutions/4665653/sequential-digits-cpp-beats-85-detail-explaination