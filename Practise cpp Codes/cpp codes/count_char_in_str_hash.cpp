/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

//fun to cal char in str using hash by arr
count_str(string s, int q){
    int hash[256] {};

    for(int i=0; i<s.size(); i++){
        //pre-compute
        hash[s[i]] += 1;
    }

    while(q--){
        char ch;
        cout<<"enter the character you want to find in str: ";
        cin>>ch;
        //fetching data
        cout<<hash[ch]<<endl;
    }
}

/*Implementation of char hash using arr*/
int main(){

    string s;

    cout<<"enter string s: ";
    getline(cin,s);

    int query;
    cout<<"enter the number of query :";
    cin>>query;

    count_str(s, query);

    return 0;
}