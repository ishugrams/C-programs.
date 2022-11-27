#include<stdio.h>
#include<stdbool.h>
bool Check(char *str, char ch)
{
    while(*str != '\0')
    {
        if((*str == ch))
        {   
          break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[20];
    int cValue = '\0';
    bool bRet = false;

    int iRet = 0;
    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the charecter\n");
    scanf(" %c",&cValue);  //minor space takla ani mg slove zala mahnje display zala

    bRet = Check(Arr,cValue);
    if(bRet == true)
    {
      printf("charectwr is persent in string\n");
    }
    else
    {
      printf("charecter is not present in string\n");
    }
    return 0;
}