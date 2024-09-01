class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
    /*black color - is even
      white color - is odd
    */
    
    //convert the first coordinate
    int col1 = coordinate1[0] - 'a' + 1; // Convert column letter to number (1-8)
    int row1 = coordinate1[1] - '0';     // Convert row character to an integer
    
    // Convert the second coordinate
    int col2 = coordinate2[0] - 'a' + 1; // Convert column letter to number (1-8)
    int row2 = coordinate2[1] - '0';     // Convert row character to an integer
    
    // Determine if both sums have the same parity (even or odd)
    return (col1 + row1) % 2 == (col2 + row2) % 2;
    }
};