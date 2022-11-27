#include <iostream>

using namespace std;

class Base1
{
   public:
      int A;

      Base1()
      {
        cout<<"base1 constructor\n";
      }
      ~Base1()
      {
        cout<<"base1 destructor\n";
      }
      void Fun()
      {
      cout<<"insude the base1 fun\n";

      }
};    // ; is c++ but in java we dont have to give the semicolon(;)

class Base2
{
  public:
     int I,J,K;
      Base2()
      {
        cout<<"base2 constructor\n";
      }
     ~Base2()
      {
        cout<<"base2 destructor\n";
      }
      void gun()
      {
      cout<<"inside base2 gun\n";
      }
 

};

class derived : public Base1,public Base2
{
  public:
      int X,Y;

      derived()
      {
        cout<<"derived constrctor\n";
      }
      ~derived()
      {
        cout<<"derived destructor\n";
      }
      void sun()
      {
         cout<<"derived sun\n";
      }

 
};

int main()
{
  derived dobj;

  dobj.Fun();  //base1
  dobj.gun();   //base2
  dobj.sun();   //derived

  return 0;
}