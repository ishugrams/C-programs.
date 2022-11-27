#include <stdio.h>
#include<stdbool.h>

//%  mod
//== equality

bool CheckEven(int iNo)
{
  if((iNo % 2)  == 0)  //baki milate remainder //==equality oparater
  {
     return true;
  }
  else
  {

     return false;

  }
}

int main()  //start
{  
  int ivalue = 0;  //=assingment oparater
  bool bRet = false;

  printf("enter one number\n");
  scanf("%d",&ivalue);

  bRet = CheckEven(ivalue);
  if(bRet == true)
  {
    printf("It is even number\n");
  }
  else
  {
    printf("it is odd number\n");
  }


  return 0;
}  