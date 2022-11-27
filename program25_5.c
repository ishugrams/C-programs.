#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    char rev[1000000];
    int i,j,count = 0;

    while(str[count] != '\0')
    {
        count++;
    }    
    j = count -1;
    for(i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }

    printf("%s",rev);
}
int main()
{
  char arr[20];
  int iRet = 0;

  printf("Enter string\n");
  scanf("%[^'\n']s",arr);

  Reverse(arr);
  
  return 0;
   
}