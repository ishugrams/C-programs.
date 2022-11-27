#include <iostream>

//using namespace std; //use for cout

namespace Marvellous
{
  class Demo
  {
    public:
        int i,j;
        void fun()
        {
          cout<<"inside the fun marvellous\n";
        }
  };
  class Hello
 {
    public:
       int x,y;
  };
}
namespace Infosystem
{
  class Demo
  {
  public:
        int i,j;
        void fun()
        {
          cout<<"inside the fun in infosytem\n";
        }
  };
}


int main()
{
  Marvellous::Demo obj1;
  obj1.fun();
  Infosystem::Demo obj2;
  obj2.fun();
  
  using namespace Marvellous;

  Hello hobj;
  Demo obj3;

  return 0;
}