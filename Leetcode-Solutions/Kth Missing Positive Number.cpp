class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        // for (int i = 0; i < arr.size(); i++) {
        // if (arr[i] <= k) k++; //shifting k
        // else break;
        // }return k;
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            // Number of missing numbers up to index i = vec[i] - (i+1)
            int missing = arr[mid] - (mid + 1);
            if (missing < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }return k + high + 1;   
    }
};

//  LINK: https://leetcode.com/problems/kth-missing-positive-number/solutions/5572854/cpp-bs-optimal-c