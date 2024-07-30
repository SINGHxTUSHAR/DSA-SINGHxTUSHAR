#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }if(nums[k]==0) cout<<"0";
    else cout<<k+1;
    return 0;
}