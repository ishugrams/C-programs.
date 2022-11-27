#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str )
{
    if((*str == 'a') || (*str  == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
  char arr[20];

  BOOL bRet = FALSE;

  printf("Enter string\n");
  scanf("%[^'\n']s",arr);

  bRet = ChkVowel(arr);

  if(bRet == TRUE)
  {
    printf("contain vowel");
  }
  else
  {
    printf("There is no vowel");
  }
  return 0;
   
}