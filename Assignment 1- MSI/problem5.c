
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number(0-100): ");
    scanf("%d", &num);
    if (num>89){
      printf("Mark: %d >> Grade A" , num);
    }
    else if (num>79){
      printf("Mark: %d >> Grade B" , num);
    }
    else if (num>69 ){
      printf("Mark: %d >> Grade C" , num);
    }
    else if (num>59 ){
      printf("Mark: %d >> Grade D" , num);
    }
    else if (num>39 ){
      printf("Mark: %d >> Grade E" , num);
    }
    else{
      printf("Mark: %d >> Grade F" , num);
    }

}

