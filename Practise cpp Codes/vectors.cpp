/*Author: TUSHAR SINGH*/
#include<iostream>
using namespace std;
#include<vector>

/*vector in STL*/
int main(){

    vector<int>v;

    for(int i=1; i<11; i++){
        v.push_back(i);
    }
    
    cout<<"elements are: ";
    for(auto m=v.begin(); m != v.end(); m++){
        cout<<*m<<" ";
    }cout<<endl;
    cout<<"========================================"<<endl;


    //insert at specific position
    auto it = v.begin();
    v.insert(it,99);
    cout<<"new vector is: ";
    for(auto m=v.begin(); m != v.end(); m++){
        cout<<*m<<" ";
    }cout<<endl;
    cout<<"========================================"<<endl;


    //delete from a specific position
    auto p = v.begin() + 1;
    v.erase(p);
    cout<<"deleting '1' from the vector: ";
    for(auto m=v.begin(); m != v.end(); m++){
        cout<<*m<<" ";
    }cout<<endl;
    cout<<"========================================"<<endl;


    //deleting last element then pushing another element at last
    v.pop_back();
    v.push_back(987);
    for(auto m=v.begin(); m != v.end(); m++){
        cout<<*m<<" ";
    }cout<<endl;
    cout<<"========================================"<<endl;


    cout<<"The first elemt of vector is: "<<v.front()<<endl;
    cout<<"The last element of vector is: "<<v.back()<<endl;
    cout<<"The size of vector is: "<<v.size()<<endl;
    cout<<"========================================"<<endl;

    //checking empty or not
    if(v.empty() == true) cout<<"vector is empty"<<endl;
    else cout<<"vector is not empty"<<endl;
    cout<<"========================================"<<endl;

    
    //deleting all elements
    v.clear();
    if(v.empty() == true) cout<<"vector is empty"<<endl;
    else cout<<"vector is not empty"<<endl;


    return 0;

}