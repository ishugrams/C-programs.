#include<iostream>  //input output stream we use cin and cout in iostream
using namespace std;  //cout- fuction nahiye it is the class of object main , print f - is a function
//class declaration
class Maths
{
  public:           //access specifier -- public ,private, protected.
      int ino1;     //charactaristics
      int ino2;     //charactaristrises
          
  Maths()           //constructor (default)      constructor-- use to allocate the resourses , distructotre -- use to delllocate the resoureses
  {
    cout<<"inside default constructor\n";
    ino1 = 0;
    ino2 = 0;    //characteristic -- pratek object la vegali memorry allocate hoyel
  }  

  Maths(int A , int B)//construtor (parametred)
  {
    cout<<"inside paramitarized constructor\n";
    ino1 = A;
    ino2 = B;   //behariviour karta - ek common memory allocated hoti
  }

  ~Maths()
  {
      cout<<"inside destructor\n";
      //destructor
  }  
//int addition(Maths *this)
   int Addition()
  {
  return ino1 + ino2;  
  }

  int Substration()
  {
  return ino1 - ino2;
  }

};

int main()
{
  cout<<"inside main function\n";
  Maths mobj1;     //8  //impicitlly tho 10 no chya function var gela
  Maths mobj2(11,10);  //8   
  int ret = 0;

  ret = mobj2.Addition();  //ret= addition(&mobj2);
  //ret = Addition(200);
  cout<<"addition is : "<<ret<<"\n";  

  ret = mobj1.Substration();  //ret  = substraction(&obj1)
  //ret = Substraction(100)
  cout<<"substraction is : "<<ret<<"\n";  
  
  return 0;
}



//mall chya aatmadhala dukaaan =
//baher ch dukaaan = naked
