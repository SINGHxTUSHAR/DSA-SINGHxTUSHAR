/*
* WAP TO PRINT THE PATTERN 
          111
          222
          333
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
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}