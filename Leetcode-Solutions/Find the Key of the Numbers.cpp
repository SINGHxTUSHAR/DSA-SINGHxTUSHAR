class Solution {
public:

    string padToFourDigits(int num) {
    // Use stringstream to format the number with leading zeros
    stringstream ss;
    ss << setw(4) << setfill('0') << num;
    return ss.str();
}

    int generateKey(int num1, int num2, int num3) {
    string s1 = padToFourDigits(num1);
    string s2 = padToFourDigits(num2);
    string s3 = padToFourDigits(num3);

    // Initialize the key as an empty string
    string key = "";

    // Find the minimum digit for each position
    for (int i = 0; i < 4; ++i) {
        char minDigit = min({s1[i], s2[i], s3[i]});
        key += minDigit;
    }

    // Convert the key to an integer to remove leading zeros
    return stoi(key);
    }
};