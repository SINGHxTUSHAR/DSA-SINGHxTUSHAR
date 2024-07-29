#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;

    for (int i = 0; i < n; i++)
    {
        cin>>str;
        if (str.length() > 10)
        {
            int len = str.length()-2;
            cout<<str[0]<<len<<str[len+1]<<endl;
        }
        else cout<<str<<endl;
    }
    return 0;
}