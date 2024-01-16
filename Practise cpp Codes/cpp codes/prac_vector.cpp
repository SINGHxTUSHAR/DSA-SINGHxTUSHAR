
#include<iostream>
#include<vector> 
using namespace std;

int main()
{
    vector <int> test { 10 ,20 ,30 };

    cout<<test[0]<<endl;
    cout<<test[1]<<endl;
    cout<<test[2]<<endl;
    
    cout<<"enter ther test-score :"<<endl;

    cin>>test.at(0);
    cin>>test.at(1);
    cin>>test.at(2);

    cout<<test.at(0)<<endl;
    cout<<test.at(1)<<endl;
    cout<<test.at(2)<<endl;

    return 0;


}