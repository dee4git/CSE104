#include <stdio.h>
int main()
{
    char a;
    printf("Enter a letter: ");
    scanf("%c", &a);
    if (a == 'a' ){
      printf("%c is a vowel", a);
    }
    else if (a == 'e' ){
      printf("%c is a vowel", a);
    }
    else if (a == 'i' ){
      printf("%c is a vowel", a);
    }else if (a == 'o' ){
      printf("%c is a vowel", a);
    }else if (a == 'u' ){
      printf("%c is a vowel", a);
    }
    else{
      printf("%c is a consonant", a);
    }

}

