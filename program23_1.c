#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z')  || (ch >= 'a') && (ch <='z')) 
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("please enter one charecter\n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf(" is a Alphabet letter\n");
    }
    else
    {
        printf(" is not Alphabet letter\n");
    }
    return 0;
}