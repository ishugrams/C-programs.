#include<iostream>

using namespace std;

int main()
{
  int *p = NULL;

  p = new int[5];
  //p = (int *)malloac(10 * sizeof(int));

  //use the memory

  delete []p;
  //free(p);


  return 0;
}


/*
int * p = NULL;

p = new int;

int * q= NULL;

q = new int(5);

int * x = NULL;

x = new int[5];

delete p;

delete q;

delete []x;

*/