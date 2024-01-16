/*******************************
* WAP TO PRINT THE PATTERN-
                           A B C
                           B C D
                           C D E
********************************/


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
        while(j<=n)
        {
            char ch ='A'+ i + j - 2; // logic or relation between row and column.
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}