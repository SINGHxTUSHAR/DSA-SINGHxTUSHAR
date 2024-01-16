/*
*FACTORIAL PROGRAM
*/


#include<iostream>
using namespace std;

int main()
{
    int n,i,fact=1;

    cout<<"ENTER THE VALUE OF N:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"FACTORIAL OF N IS:"<<fact;
    return 0;
}