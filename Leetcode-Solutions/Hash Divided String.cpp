class Solution {
public:
    string stringHash(string s, int k) {
    int n = s.length();
    string result = "";

    // Traverse each substring of length k
    for (int i = 0; i < n; i += k) {
        int sum = 0;
        
        // Calculate the sum of hash values of the characters in the current substring
        for (int j = i; j < i + k; ++j) {
            sum += (s[j] - 'a');  // 'a' corresponds to 0, 'b' to 1, ..., 'z' to 25
        }

        // Find the remainder when the sum is divided by 26
        int hashedChar = sum % 26;

        // Append the corresponding character to the result
        result += (char)('a' + hashedChar);
    }

    return result;
    }
};