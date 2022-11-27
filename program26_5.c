#include<stdio.h>


int CountWhite(char *str)
{
  int i = 0;
  int space = 0;
  while(i <= str[i])
  {
    if(str[i] == ' ')
    {
        space++;
    }
    i++;
  }
  return space;
}
int main()
{
   char arr[100];
   int iRet = 0;

   printf("Enter the string\n");
   scanf("%[^'\n']s",arr);

   iRet = CountWhite(arr);

   printf("%d",iRet); 

    return 0;
}