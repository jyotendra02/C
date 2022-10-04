#include<iostream>
using namespace std;
int main()
{
    
    int n=5;
    for(int i = 1;i<=2*n-1;i++)
    {
        int j=1;
        if(i<=n)
        {
            for(;j<=i;j++)
            cout<<"* ";
            cout<<endl;
        }
        else
        {
            for(;j<=2*n-i;j++)
            cout<<"* ";
            cout<<endl;
        }

    }
    return 0;
}