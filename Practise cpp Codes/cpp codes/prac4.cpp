/*
*WAP TO CHECK FOR PRIME NUMBER IN N
*AUTHOR-TUSHAR SINGH , DATE-27-02-23
*/


#include<iostream>
using namespace std;

int main()
{
    int i,n;
    bool a;

    cout<<"ENTER THER VALUE OF N:";
    cin>>n;

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a++;
            break;
        }
    }

    if(a==true)
    cout<<"NOT PRIME";

    else
    cout<<"PRIME NUMBER";

    return 0;
}