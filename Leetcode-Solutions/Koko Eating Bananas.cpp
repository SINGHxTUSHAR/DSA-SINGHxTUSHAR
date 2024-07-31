#include<bits/stdc++.h>
class Solution {
private: 

// int findMax(vector<int> &v) {
//     int maxi = INT_MIN;
//     int n = v.size();
//     //find the maximum:
//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, v[i]);
//     }
//     return maxi;
// }

// int calculateTotalHours(vector<int> &v, int hourly) {
//     long long totalH = 0;
//     int n = v.size();
//     //find total hours:
//     for (int i = 0; i < n; i++) {
//         totalH += ceil((double)(v[i]) / (double)(hourly));
//     }
//     return totalH;
// }

bool canEatAll(vector<int>& piles, int givenHour, int h) {
        int actualHour = 0;
        
        for(int &x : piles) {
            actualHour += x/givenHour;
            
            if(x%givenHour != 0)
                actualHour++;
            
        }
        
        return actualHour <= h;
}

public:
    int minEatingSpeed(vector<int>& piles, int h) {
    /*Brute || naive APPROACH*/ /*RunTime Error*/
    // //to find the max banana it can it/h:
    // int maxi = findMax(piles);

    // //Find the minimum value of k: minimum banana to eat <= h
    // // linear search
    // for (int i = 1; i <= maxi; i++) {
    //     int reqTime = calculateTotalHours(piles, i);
    //     if (reqTime <= h) {
    //         return i;
    //     }
    // }

    // //dummy return statement
    // return maxi;

    /*BS Approach*/ /*edge case - wrong answer*/
    // long long low = 1, high = findMax(piles);

    // //apply binary search:
    // while (low <= high) {
    //     long long mid = (low + high) / 2;
    //     long long totalH = calculateTotalHours(piles, mid);
    //     if (totalH <= h) {
    //         high = mid - 1;
    //     }
    //     else {
    //         low = mid + 1;
    //     }
    // }
    // return low;

    
    int n = piles.size();
        
        int l = 1, r = *max_element(begin(piles), end(piles));
        
        while(l < r) {
            int mid = l + (r-l)/2;
            
            if(canEatAll(piles, mid, h)) {
                r = mid;
            } else {
                l = mid+1;
            }
            
        }
        
        return l;
    }
};

//LINK: https://leetcode.com/problems/koko-eating-bananas/solutions/5561772/bs-optimal-cpp-c-multi-approach-bs