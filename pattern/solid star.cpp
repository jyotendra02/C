#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=n-i;j<n;j++)
        {
            cout<<"*";
        }
        for(j=2;j<=i;j++)
        {
            cout<<"*";     
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=n-i;j<n;j++)
        {
            cout<<"*";
        }
        for(j=2;j<=i;j++)
        {
            cout<<"*";     
        }
        cout<<endl;
    }
    return 0;
}