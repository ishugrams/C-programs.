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

int main()
{
  //derived dobj;  //satic memory allocation
  derived * ptr = NULL;

  ptr = new derived;   //dynamic memory alllocation

  ptr->Fun();  //lahan capabilitity asalela pointer upcasting and motha is downcasting
  ptr->gun();

  delete ptr;

  return 0;
}