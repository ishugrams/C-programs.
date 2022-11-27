.
#include<stdio.h>

#include<stdlib.h>

int main()
{
  int *p = NULL;
  int *q = NULL;


  p = (int*)malloc(10 * sizeof(int));   //40 fall zali

  //use the memory

  q = (int*)realloc(p, 15 * sizeof(int));   //60 maghatoy
  if(q == NULL)
  {
    printf("realloc falls");
    q = p;
  }

  //use the  memory

  free(q);
  
  return 0;
  }



