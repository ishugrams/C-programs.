#include<stdio.h>
#include<stdlib.h>


struct Demo
{
  int i;
  float f;
};

int main()
{
  struct Demo obj;    //static memory allocation

  struct Demo *ptr = NULL;
  ptr =(struct Demo *)malloc(sizeof(struct Demo));  //dynamic memory allocation

  obj.i = 11;
  obj.f = 9.0;

  ptr->i = 11;
  ptr->f = 9.0;

  printf("%d\n",obj.i);
  printf("%d\n",ptr->i);
  printf("%f\n",obj.f);
  printf("%f\n",ptr->f);


  free(ptr);        //deallocated

  return 0;
}
