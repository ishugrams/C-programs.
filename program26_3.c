#include<stdio.h>
#include<string.h>

void strtogglex(char *str)
{
    char  i;
    for(i= 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i]<= 'Z' )
        {
        str[i]+=32;
        }
        else if(str[i]>= 'a' && str[i]<= 'z')
        {
            str[i]-=32;
        }
   
    }

}
int main()
{
    char arr[10000];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("modified string is %s",arr);

    return 0;
}