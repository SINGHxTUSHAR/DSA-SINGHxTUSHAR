/******************************
* WAP TO PRINT THE PATTERN-
                           D
                           C D
                           B C D
                           A B C D
*********************************/


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
        while(j<=i)
        {
            char ch ='D'-i+j; // logic or relation between row and column.
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}