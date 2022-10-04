#include<iostream>
using namespace std;

int search(int arr[],int key ,int lb, int ub)
{
    while(lb <= ub)
    {
         int mid = lb + (ub-lb)/2;
         if(arr[mid]==key)
         return mid;        
         else if(arr[mid]>key)
         ub = mid-1;
         else
         lb = mid+1;          
    }
    return -1;
}

int main()
{
    int a[10]={1,2,3,6,7,8,18,19,24,28};
    int x = 18;
    int size = sizeof(a)/sizeof(int);
    int index = search(a,x,0,size-1);
    if (index == -1)
    printf("Not found");
    else
    printf("Element is found at index %d", index);
    return 0;
}