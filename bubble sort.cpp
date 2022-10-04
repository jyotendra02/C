#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            swap(&arr[j+1],&arr[j]);
        }
    }
}

void print_arr(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int a[15]={5,8,12,16,99,19,3,2,18,24,28,02,7,3,4};
    int size = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,size);
    print_arr(a,size);
    return 0;
}