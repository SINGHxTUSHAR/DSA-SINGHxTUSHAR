#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<long long,long long> freq_mp;
        for(int i=0;i<n;i++){
            freq_mp[a[i]]++;
        }
        if(freq_mp.size() >= 3) cout<<"No"<<endl;
        else{
            long long freq1 = freq_mp.begin()->second;
            long long freq2 = freq_mp.rbegin()->second;

            if(freq1 == freq2) cout<<"Yes"<<endl;
            else if(n%2 == 1 && abs(freq1-freq2)==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }return 0;
}