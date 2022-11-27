#include <iostream>
using namespace std;
class Base
{
  public:
      int A,B;

};

class derived : public Base
{
  public:
     int X,Y;
};

int main()
{
  Base * bp = NULL;
  derived *dp = NULL;  

  Base bobj;
  derived dobj;

  bp = &bobj;   //no casting  //a
  dp = &dobj;   //no casting  //a
  bp = &dobj;   //upcating    //a     //lahan maap motha data
  dp = &bobj;   //downcasting  //na   //motha maaap lahan data

  return 0;
}