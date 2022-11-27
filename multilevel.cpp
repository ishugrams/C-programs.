#include<iostream>

using namespace std;


class Base
{
  public:
     int A,B;

     Base()
     {
      cout<<"inside the base constructor\n";
     }
     ~Base()
     {
      cout<<"inside the base destructor\n";
     }
    void Fun()
    {
      cout<<"inside the fun\n";
    }

};

class derived : public Base   //class derived extends  base (syntax of java)
{
  public:
       int X,Y;

       derived()
       {
        cout<<"inside derived constructot\n";
       }
       ~derived()
       {
        cout<<"inside derived destructor\n";
       }
       void gun()
       {
        cout<<"inside gun of the derived\n";
       }
};

class derivedX : public derived
{
  public:
      int i, j;
      derivedX()
      {
        cout<<"inside the derivedX constructot\n";
      }
      ~derivedX()
      {
        cout<<"insidde the derivedX destructor\n";
      }
      void sun()
      {
        cout<<"inside the derivedX sun\n";
      }
};
int main()
{
  cout<<"size of base : "<<sizeof(Base)<<"\n";
 cout<<"size of derived : "<<sizeof(derived)<<"\n";
 cout<<"size of derivedX: "<<sizeof(derivedX)<<"\n";

  derivedX dobj;

  dobj.Fun();
  dobj.gun();
  dobj.sun();

  return 0;
}