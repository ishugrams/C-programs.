#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
      if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        return FALSE;
    }
    else
    {
        return  TRUE;
    }


}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the chrecter\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a sepcial case\n");
    }
    else
    {
        printf("It is not a sepcial case\n");
    }
    return 0;
}