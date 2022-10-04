#include<iostream>
using namespace std;
int main()
{
    int X[6]={6,9,8,9,7,5},i,j,t;
    int n=sizeof(X)/sizeof(X[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(X[j]>X[j+1])
            {
                t = X[j];
                X[j]=X[j+1];
                X[j+1]=t;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<X[i];
        if(i<n-1)
        {
            cout<<",";
        }
    }

    
    return 0;
}