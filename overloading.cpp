#include<iostream>

using namespace std;

class overloading
{
  public:
      //add@2ii
       int Add(int a, int b)
       {
        cout<<"Addition of interger\n";  //1000
        return a + b;
       }
      //add@2ff
       float Add(float a, float b)
       {
        cout<<"Addition of float\n";    //2000
        return a + b;
       }
       //add@2dd
       double Add(double a, double b)
       { 
        cout<<"additon of double\n";   //3000
        return a + b;
       }
       //add@3ii                           //every function name by changing by deafault
       int Add(int a, int b , int c)      //we catn the overload the function by changing the reaturn value
       {
        cout<<"Addition of 3 interger \n"; //4000   //overload the function by changing the sequece of function
        return a + b + c;
       }
      //Fun@2if
       void Fun(int a, float b)
       {}
      //Fun@2fi
       void Fun(float a, int b)  //sequence of argument  //we can overload the funtion by overload the function
       {}
};

int main()
{
  overloading obj;
  int i;
  float f;
  double d;
  obj.Add(11,21); //call 1000
  cout<<i<<"\n";
  obj.Add(11,21,51); //call 4000
  cout<<i<<"\n";
  obj.Add(10.9f,89.5f); //call 2000
  cout<<f<<"\n";
  obj.Add(10.9,89.5);  //call 3000
  cout<<d<<"\n";

  return 0;
}
///
//sizeof('A');
//sizeof(11);
//sizeof(88.90);
//sizeof(88.90f);   //4

//int i = 10;
//printf("%d",i);    //10
//printf("%d",sizeof(++i));  //4
//printf("%d",i);   //10
