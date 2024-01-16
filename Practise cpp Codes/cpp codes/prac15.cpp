/*****************************************
* WAP TO PRINT THE PATTERN-
                           1
                           2 3
                           4 5 6
                           7 8 9 10 
                           11 12 13 14 15
******************************************/


#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"ENTER THE SIZE OF N:";
    cin>>n;

    int i=1,value=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}