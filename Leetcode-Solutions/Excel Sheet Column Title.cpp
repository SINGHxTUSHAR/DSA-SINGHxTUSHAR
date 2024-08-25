class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        while(columnNumber > 0){
            // to cover the edge case : colNum = 26 : z
            columnNumber--;

            int remain = columnNumber % 26;
            char ch = remain + 'A';
            ans.push_back(ch);

            columnNumber /= 26;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};