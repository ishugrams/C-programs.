#include<iostream>
using namespace std;

class Base
{
  public:     //he nasta tar by default private hota ani private kela tar te errror sidata
     int A,B;

     void Fun()    //function declaration   //1000
     {
      cout<<"Base fun\n";

     }
      void gun(int i)   //function defination   //2000
      {
      cout<<"Base gun with integer one\n";
      }
      void gun(int i, int j)  //overloaded function defination  //3000
      {
      cout<<"Base gun with integer two\n";
      }
     
};

class derived : public Base
{
  public:
      int X,Y;
      void sun()  //function defination  //4000
      {
        cout<<"derived sun\n";
      }

      void fun()  //function redefination  //5000
      {
        cout<<"derived fun\n";
      }
};

int main()
{
   derived dobj;
   dobj.fun();  //CALL  //5000
   dobj.gun(11);  //CALL  //2000
   dobj.gun(11,21);  //CALL  //3000
   dobj.sun();  //CALL  //4000

  return 0;
}