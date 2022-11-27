#include<stdio.h>
#include<string.h>

void strDigit(char *str)
{
   int nc = 0;
   int i = 0;
   for(i = 0; str[i] != '\0'; i++)
   {
    if((str[i] >= '0') && (str[i] <= '9'))
    {
        nc += 1;
        printf("%d", nc);
    }
   }
}
int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strDigit(arr);

    return 0;
}