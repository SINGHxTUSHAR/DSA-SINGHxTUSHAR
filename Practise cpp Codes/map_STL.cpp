/*Author: TUSHAR SINGH*/
#include<bits/stdc++.h>
using namespace std;

//fun to print the values of map
void print_ele(map<int,int>mpp){
    for(auto k=mpp.begin(); k != mpp.end(); k++){
        cout<<"key value :"<<k->first<<" and "<<"mappeed value :"<<k->second<<endl;
    }cout<<endl;
}

//fun to check whether map is empty or not
void check_empty(map<int,int>mpp){
    if(mpp.empty() != false) cout<<"map is empty"<<endl;
    else cout<<"map is not empty"<<endl;
}

//fun to find specific element in map
void find_ele(int temp,map<int,int>mpp){
    if(mpp.find(temp) != mpp.end()){
        cout<<temp<<" is present in map."<<endl;
    }else cout<<temp<<" is not present in map."<<endl;
}

/*MAP_STL*/
int main(){

    map<int,int>mpp;
    
    //inserting values into map
    for(int i=1; i<6; i++){
        mpp.insert({i,i*10});
    }
    
    cout<<"Elements present in map are: "<<endl;
    print_ele(mpp);
    cout<<"====================================="<<endl;

    cout<<"checking empty or not: "<<endl;
    check_empty(mpp);
    cout<<"====================================="<<endl;

    int temp = -1;
    cout<<"enter the value which you want to find in map: ";
    cin>>temp;
    find_ele(temp,mpp);
    cout<<"====================================="<<endl;


    //deleting element from front
    cout<<"Ddeleting first element"<<endl;
    mpp.erase(mpp.begin());

    cout<<"Elements present in map after deletion of first element are: "<<endl;
    print_ele(mpp);
    cout<<"====================================="<<endl;

    cout<<"Deleting all the elements of map."<<endl;
    mpp.clear();
    cout<<"Final check: ";
    check_empty(mpp);

    return 0;
}