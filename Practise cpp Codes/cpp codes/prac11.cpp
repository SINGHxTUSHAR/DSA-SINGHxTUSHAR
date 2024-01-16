/*
* WAP TO PRINT THE PATTERN :
                            321
                            321
                            321
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE SIZE OF PATTERN: ";
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;

}