#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
    char ch = 'a';
      {
        printf("%c\n",ch);
      }
    }
    else
    { 
    char ich = 'A';
      {
        printf("%c\n",ich);
      }

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