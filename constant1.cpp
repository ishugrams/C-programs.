#include <iostream>

using namespace std;

class demo
{
  public:
      int i;
      int j;
      const int k;
      const int l;


    demo() : k(11), l(21)  //daaraat kama karanari 
    {
      i = 51;
      j = 101;
    }
    demo(int a, int b, int c, int d) : k(c), l(d)
    {
      i = a;
      j = b;
    }

};

int main()
{
  demo obj1;
  demo obj2(10,20,30,40);
  //obj1.k++;
  //obj2.k++;
  //obj1.i++;
  //obj2.i++;

  return 0;

}   // c madhi constant variable nahi kela tari chalataoy 