#include<stdio.h>

int main()
{
    /*int i = 1,j = 10;
    while(i<=5)
    {
       printf(" %i %i %i %i %i \n",j,j,j,j,j);
       j+=10;
       i++;
    }*/

    int i =10;
    while(i<=50)
    {
        int j=1;
        while(j<=5)
        {
            printf(" %i",i);
            j++;
        }
        printf("\n");
        i+=10;
    }

    
}