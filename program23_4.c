#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
      if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
        printf("It is small \n");
    }
    else
    {
        printf("It is not a small\n");
    }
    return 0;
}