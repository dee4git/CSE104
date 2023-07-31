#include<stdio.h>
int main ()
{
    int id = 9;
    int i = 0;
    for(;;)
    {
        printf("%d\n", i);
        i+=2;
        if (i==id)break;
    }
}
