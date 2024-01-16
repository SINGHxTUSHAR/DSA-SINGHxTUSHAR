/*
*WAP TO PRINT EVEN NUMBER UPTO N
*/


#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"ENTER THE VALUE OF N:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
    return 0;
}