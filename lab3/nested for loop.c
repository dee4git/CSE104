#include<stdio.h>
int main()
{
    int i,j;
    int count = 0;
    for ( j = 0; j< 5; j ++)
    {
        for (i=0; i<5; i ++)
        {
            count++;
            printf("%d ", count);
        }
        printf("--- inside for loop done once --- \n");

    }

}
