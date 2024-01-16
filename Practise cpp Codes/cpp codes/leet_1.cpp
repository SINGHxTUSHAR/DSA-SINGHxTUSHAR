/*********************************************
*AUTHOR-TUSHAR SINGH
DATE-27-02-2023
WAP-LEETCODE//TWO_SUM
**********************************************/


#include<iostream>
using namespace std;

int main()
{
    int sum,remain,target,a,b,num[100],n,i;
    sum=0,remain=0,b=0;
    cout<<"enter target value"<<endl;
    cin>>target;

    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE VALUES OF ARRAY"<<endl;
    for(i=0;i<=n-1;i++)
    {
        cin>>num[i];
    }
    sum=num[0];
    remain=target-sum;

    for(i=0;i<=n-1;i++)
    {
        if(remain==num[i])
        a=i;
    }

    cout<<"index are "<<b<<a;
    return 0;

}