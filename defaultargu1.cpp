#include <iostream>

using namespace std;


class demo
{
  public:
      int A,B;
      demo(int i = 0, int j = 0)
      {
        A = i;
        B = j;
      }
 
};


int main()
{
  demo obj1;
  demo obj2(11);
  demo obj3(11,21);
  return 0;
}