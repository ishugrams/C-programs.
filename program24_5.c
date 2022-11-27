#include<stdio.h>

void Display(char ch)
{
    char i;
    if(ch = 'A' )
      {
        printf("%c\t %d\t %o\t %x\t",ch,ch,ch,ch);
      }

}

int main()
{
    char cValue =- '\0';

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}