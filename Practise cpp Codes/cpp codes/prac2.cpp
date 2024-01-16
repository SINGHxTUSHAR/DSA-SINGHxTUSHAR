/*
*WAP TO PRINT THE SUM UPTO N DIDGITS
*/


#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"SUM OF DIGITS UPTO N IS:"<<sum;
    return 0;
}