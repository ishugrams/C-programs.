#include<stdio.h>

int main()
{
  int *p = NULL;
  int Size = 0;
  
  printf("Enter the size\n");
  sacnf(%d,&size);

  p = (int *)malloc(sizeof(int) * size);  //malloc(4 * 5)  -->malloc()
  p = (int *)calloc(sizeof(int) , size);  //calloc(4 , 5);

  return 0;
}

//void *malloc(int size);
//void *calloc(int size, int elements);