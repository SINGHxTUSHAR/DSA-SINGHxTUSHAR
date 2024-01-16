#include<iostream>
using namespace std;

int main(){

    int a{},b{},c{};

    cout<<"ENTER THE THREE SIDES OF TRIANGLE WITH THE SPACE IN BETWEEN :";
    cin>>a>>b>>c;
    

    cout<<endl;
    //candition for the valid triangle
    if(a + b > c){
        if(a + c > b){
            if(b + c > a){
                cout<<"This is a valid Triangle";
            }
        }
 
    }
    else{
        cout<<"This is not a valid triangle"<<endl;
    }cout<<endl;

    return 0;
}