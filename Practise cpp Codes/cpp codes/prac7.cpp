/*
* SUM OF EVEN NUMBER UPTO N
*/


#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"ENTER THE VALUE OF N: ";
    cin>>n;

    int sum=0,i;
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"SUM OF EVEN NUMBER UPTO N IS: "<<sum;

    return 0;
}