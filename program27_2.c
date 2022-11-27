#include<stdio.h>

int Countch(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    char cValue;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter charecter\n");
    scanf(" %c",&cValue);


    iRet = Countch(Arr,cValue);

    printf("frequency a is  :%d\n",iRet);

    return 0;
}