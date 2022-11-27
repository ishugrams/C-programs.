#include<stdio.h>
#include<string.h>

void StrRev(char *str)
{
    int i,len,temp;
    len = strlen(str);
    len = strlen(str);

    for(i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i]= str[len - i - 1];
        str[len - i - 1] =  temp;
    }

}
int main()
{
    char arr[20];

    printf("Enter the stringn\n");
    scanf("%[^'\n']s",arr);

    StrRev(arr);

    printf("modidided string is %s",arr);

    return 0;
}