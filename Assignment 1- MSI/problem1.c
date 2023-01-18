#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a==0){
      printf("its a zero", a);
    }
    else if (a>=0){
      printf("%d is positive",a );
    }
    else{
      printf("%d is negative",a );
    }

}
