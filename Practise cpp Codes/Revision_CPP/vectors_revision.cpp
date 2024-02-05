/*Author: TUSHAR SINGH*/

#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;

//understanding the vector and some basic functionality

void sort(vector<int>v1){
    sort(v1.begin(),v1.end());
    
    for(auto ele: v1) cout<<ele<<" ";
    cout<<endl;
    cout<<"=================================="<<endl;
}

void reverse(vector<int>v2){
    reverse(v2.begin(),v2.end());

    for(auto ele: v2) cout<<ele<<" ";
    cout<<endl;
    cout<<"=================================="<<endl;
}

void accumulate(vector<int>v3){
    int sum = accumulate(v3.begin(),v3.end(),0);

    cout<<"sum of elements of vector is: "<<sum<<endl;
    cout<<"=================================="<<endl;


}

int main(){
    //initialize and declare the vec
    vector<int>v{1,221,31,4,53,62,70,8,9};

    vector<int>vec;

    //taking input from the user into arr
    int size{},n{};

    cout<<"enter the size of your vector:"<<endl;
    cin>>size;

    cout<<"enter the elements in vector"<<endl;
    for(int i=0; i<size; i++){
        cin>>n;
        vec.push_back(n);

    }
    
    //fun to sort the given vector
    sort(vec);
    

    //fun to reverse a vector
    reverse(vec);

    //fun to calculate the sum of ele in vec
    accumulate(vec);
    
    return 0;
}
