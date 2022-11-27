#include <iostream>

//using namespace std; //use for cout

namespace 
{
  class Demo
  {
  public:
        int i,j;
        void fun()
        {
         std::cout<<"inside the fun from unnamed\n";
        }
  };
}


int main()
{
  Demo obj;
  obj.fun();
  return 0;
}