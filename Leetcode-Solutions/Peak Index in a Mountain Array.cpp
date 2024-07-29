class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        int n = arr.size();
        int s{0}, e{n - 1};
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
                e = mid;
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

// LINK: https://leetcode.com/problems/peak-index-in-a-mountain-array/solutions/5552994/cpp-optimal-c