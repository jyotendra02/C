#include<iostream>
using namespace std;


void sort(int arr[],int n)
{
        for(int i = 0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
}

void print(int arr[],int n)
{
    for(int i = 0; i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n[5]={10,2,6,4,0};
    int size = sizeof(n)/sizeof(int);
    sort(n,size);
    print(n,size);
    return 0;
}