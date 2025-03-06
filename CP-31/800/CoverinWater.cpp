#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool continous_3emptyCells = false;
        int totalEmptyCells = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.' && i+1<n && i+2<n){
                continous_3emptyCells = true;
                break;
            }
            if(s[i] == '.') totalEmptyCells++;
        }

        if(continous_3emptyCells) cout<<2<<endl;
        else cout<<totalEmptyCells<<endl;
    }return 0;
}