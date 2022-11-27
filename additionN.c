/* 
   Steps to devople the application
   Step 1: Under stand the problem staement
   Step 2: Write the algorithm
   Step 3: Decide the programing language  (c/C++/JAVA/......,....)
   Step 4: Write the program
   Step 5: Test the program
*/


//accept N number from user and perfrom the addition

//Input
//value of N = 5
//values : 10 20 30 40 50

//Output
//addition is : 150

//algorithm
/*
   START
       Accept the number of the element from user
       Allocatethe memory to store that number
       Accept the number from user
       perfrom addition of the number
       Display the Addition
    END 
*/

#include<Stdio.h>   //for [printf and scanf ]
////////////////////////////////////////////
//
// Application name : Addittion  of Numbers
// Input : N numbers
// Output : Addition
// Author: Isha chandrakant shinde
// Date : 18th sept 2022
/////////////////////////////////////////////////
int main()
{
  int *Arr = NULL; //pointer to hold the adddtress of array
  int iSize = 0;   //variable is to hold the sze of array
  int i = 0;       //loop counter
  int iSum = 0;  //to hold the addition
  
  printf("please enter how many elements you wamt?\n");
  scanf("%d",&iSize);

  //allocate the memory
  Arr = (int *)malloc(iSize * sizeof(int));
  printf("memory allocation is sucessfull\n");

  printf("please enter the elements\n");
     //1       2         3
  for(i = 0; i < iSize; i++)
  {
     scanf("%d",&Arr[i]);  //4
  }
  
  //perfrom addition
   //  1       2        3
  for(i = 0; i < iSize; i++)
  {
    iSum = iSum + Arr[i];  //4    
  }
  printf("addition is: %d\n",iSum);
  free(Arr);
  printf("memory gets deallocated\n");
  return 0;

}
