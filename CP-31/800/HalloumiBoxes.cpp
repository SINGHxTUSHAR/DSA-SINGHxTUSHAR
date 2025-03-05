#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k;
        cin>>n>>k;

        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        vector<long long> copy_v = v;
        sort(copy_v.begin(), copy_v.end());

        //already sorted || k > 2 -> can sort with atleast 2 window size
        if(copy_v == v || k > 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }return 0;
}