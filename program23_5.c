#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if((chDiv >= 'A') && (chDiv <= 'Z'))
    {
        printf("Your exam is at 9:20");
    }
    else
    {
        printf("your exam is at 10:30");
    }

}
int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your devision\n");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);
    return 0;
}