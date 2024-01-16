/*
* WAR TO PRINT PATTERN-
                       A B C
                       A B C
                       A B C
*/

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"ENTER THE SIZE OF N: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch ='A';
        while(j<=n)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}