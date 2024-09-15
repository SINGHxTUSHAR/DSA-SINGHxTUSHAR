class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    
    int n = nums.size() - 2; 
    vector<int> frequency(n, 0); 
    vector<int> result; 

    // Traverse the nums array and update frequency
    for (int i = 0; i < nums.size(); i++) {
        frequency[nums[i]]++; 
    }

    // Find the two numbers that appear more than once
    for (int i = 0; i < n; i++) {
        if (frequency[i] > 1) {
            result.push_back(i);
        }
    }return result; 
    }
};