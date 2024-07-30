#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, cnt{0};
    cin>>n>>k;

    int nums[50];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }for(int i=0; i<n; i++){
        if(nums[i] >= nums[k-1] && nums[i]>0) cnt++;
    }cout<<cnt;
    return 0;
}