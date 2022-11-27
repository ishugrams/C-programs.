#include <iostream>

using namespace std;

class demo
{
  public:
      int i,j;
      //para  mitarized constrctor with deafault value
      demo(int x = 10, int y = 20)
      {
        i = x;
        j = y;
      }
      void fun()
      {
        i++;
        j++;
      }
      void gun() const   // i++ ani j++ he NA becze func is quanstant
      {
        i++;
        j++;
      }
};

int main ()
{
   demo obj1;   //10 20
   demo obj2(11);  //11 20
   demo obj3(11,21);  //11 21
   obj3.fun();
   obj3.gun();

  return 0;
}