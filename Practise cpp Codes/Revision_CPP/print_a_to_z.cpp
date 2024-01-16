//ASCII value of A is 65 and Z is 90
//same concept can be used for the small alphabet

#include<iostream>
using namespace std;

int main(){
    
    cout<<endl;
    cout<<"printing form A to Z :"<<endl;

    for(char ch=65; ch<=90; ch++){
        cout<<ch<<" ";
    }cout<<endl;

    return 0;
}