/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
using namespace std;

//fun for hash
void count_num(int max_ele, int q, int size, int arr[]){
    int hash[max_ele + 1] = {};

    for(int i=0; i<size; i++){
        //pre-store
        hash[arr[i]] += 1;
    }

    while(q--){
        int number;
        cout<<"enter the number to find in arr:";
        cin>>number;
        //fetching data from the hash
        cout<<hash[number]<<endl;
    }
}

/*Implementation of hashing*/
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

    cout<<"================================================="<<endl;


    int query{};
    cout<<"enter the number of queries to find in arr: ";
    cin>>query;


    cout<<"================================================="<<endl;


    int max_ele{};
    cout<<"what is the max ele could be in arr: ";
    cin>>max_ele;


    cout<<"================================================="<<endl;

    count_num(max_ele, query, size, arr);

    return 0;
}