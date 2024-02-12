/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int size{};
    cout<<"enter the size of arr: ";
    cin>>size;

    cout<<"================================================="<<endl;

    int arr[size];
    cout<<"Enter the elements in your arr: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    /*We will always prefer the unorder_map as its T.C for each operation is O(1), while map has O(logN)
      Only use map when unordered_map show TLE.
      Worst case of unordered_map happens due to collision*/
    unordered_map<int,int>mpp;
    
    //pre-computed using key and values:
    for(int i=0; i<size; i++){
        mpp[arr[i]] ++;
    }
    cout<<"================================================="<<endl;

    //iterating over the mpp
    for(auto ele : mpp){
        cout<<ele.first<<"->"<<ele.second<<endl;
    }
    cout<<"================================================="<<endl;


    int q;
    cout<<"number of query: ";
    cin >> q;

    while (q--) {
        int num;
        cout<<"enter the number to find: ";
        cin >> num;
        // fetch:
        cout << mpp[num] << endl;
    }
    return 0;
}