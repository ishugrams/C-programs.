#include<stdio.h>
#include<string.h>

int Countch(char *str, char ch)
{
    int i = 0;
    int count= 0,pos1,pos2;
    for(i = 1; i <= strlen(str); i++)
    {
        if(str[i] == ch)
        {
            count++;
            if(count == 1)
            {
                pos1 = i;
                pos2 = i;
            }
            else
            {
                pos2 = i;
            }
        }
    }
    return pos2 + 1;
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

    printf("Charecter location a is  :%d\n",iRet);

    return 0;
}