#include<stdio.h>
int main()
{
   /* for(int i = 1; i <= 5; i++)
    {
        for(int j = 10; j <= 50; j+=10)
        {
            printf(" %i",j);
        }
        printf("\n");
    }*/

    int i = 1;
    while(i<=5)
    {
        int j = 10;
        while(j<=50)
        {
            printf(" %i",j);
            j+=10;
        }
        printf("\n");
        i++;
    }

}

