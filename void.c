#include<stdio.h>

int main()
{
  char ch = 'A';
  int i = 11;
  float f = 9.09;
  double d = 89.9070;

  char *cp = &ch;
  int *ip = &i;
  float *fp = &f;
  double *dp = &d;

  void *vp = &ch;
  printf("value of ch : %c\n",ch);  //A
  printf("address of ch :%p\n",&ch); //100
  printf("inside cp :%p\n",cp);   //100
  printf("data refer by cp :%c\n",*cp); //A
  printf("size of ch: %d\n",sizeof(ch)); //1
  printf("size of cp : %d\n",sizeof(cp));//8


  printf("data refer by vp: %c\n",*(char *)vp);
  vp = &i;
  printf("Data refer by vp :%d\n",*(int*)vp);

  return 0;
}