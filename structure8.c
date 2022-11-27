#include<stdio.h>

#pragma pack(1)

struct Demo
{
  int i;
  float f; 
  double d;
}

union Hello
{
  int i;
  float f; 
  double d;
};

int main()
{
  struct Demo dobj;
  union Hello hobj;

  printf("size of the structure is : %d\n",sizeof(dobj));
  printf("size of the union : %d\n",sizeof(hobj));


  dobj.i = 11;
  dobj.f = 90.0;
  dobj.d = 90.5;

  hobj.f = 90.4;
  printf("%f\n",hobj.f);
  printf("%f\n",hobj.d);
  
  return 0;

}