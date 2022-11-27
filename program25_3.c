#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int i = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        else
        {
            i++;
        }
        str++;
    }

    return iCnt - i;


}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("frequency a is  :%d\n",iRet);

    return 0;
}