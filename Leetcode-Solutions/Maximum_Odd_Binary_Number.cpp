/*Author: TUSHAR SINGH*/

// Intuition:
// Since to get the odd number we must place is one 1's at the unit place(RSD) and to get the max odd binary number all other 1's at the LSD place(most left shift).

// Approach:
// * Define a cnt var to count the number of 1's in the given str bit.
// * Design a for loop to traverse over the given str and if the ele of str is equal to 1, then increment the cnt var by 1.
// * Create a ans str and place {cnt-1 of one's} + {n-cnt of zero's} + {'1'}
// * return the ans string.

// Complexity:
// Time complexity: O(n)
// Since to traverse over the given str as well as of str generator.
// Space complexity: O(n)
// Since ans str is usig an extra auxiliary space.

// Note:
// Another approach is also discussed in the solution section with T.C = O(nlogn).

// Code:
class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        /*Approach-1 || T.C = O(nlogn) & S.C = O(n)*/
        int n = s.size();
        //sorting in reverse order
        sort(s.rbegin(),s.rend());

        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                swap(s[i],s[n-1]);
                break;
            }
        }return s;

        /*****************************************************************/

        /*Approach-2  || T.C = O(n) & S.C = O(n)*/
        int cnt1{}, n = s.length();
        // counting number of 1 bit in string s
        for (auto ele : s){
            if (ele == '1')
                cnt1++;
        }
        string ans = string(cnt1 - 1, '1') + string(n - cnt1, '0') + '1';
        return ans;
    }
};

//LINK: https://leetcode.com/problems/maximum-odd-binary-number/solutions/4804164/maximum-odd-binary-number-cpp-detail-explanation-optimal