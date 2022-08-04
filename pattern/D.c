#include<stdio.h>

int main()
{
    int i = 1,j = 10;
    while(i<=5)
    {
       printf(" %i %i %i %i %i \n",j,j,j,j,j);
       j+=10;
       i++;
    }
}