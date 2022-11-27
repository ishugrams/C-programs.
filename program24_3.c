#include<stdio.h>

void Display(char ch)
{
    char i;
    for(i = ch ; i <='Z'; i++ )
      {
        printf("%c\t",i);
      }
    char ich;
    for(ich = ch ; ich <='z'; ich++ )
      {
        printf("%c\t",ich);
      }  
}



int main()
{
    char cValue = '\0';

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}