#include <iostream>

using namespace std;

class demo
{
  public:
      int i;
      const int j;
      //para  mitarized constrctor with deafault value
      demo(int x = 10, int y = 20) : j(y)
      {
        i = x;
      }
      void fun()  
      {
        int a = 10;
        const int b = 20;
        i++;//a(7)
        j++; //NA(8)
        a++; //a(17)
        b++; //NA(18)
      }
      void gun() const   // i++ ani j++ he NA becze func is quanstant
      {
        int a = 10;
        const int b = 20;
        i++;//NA(23)
        j++;//NA(23)
        a++;//A
        b++;//NA(27)
      }
};

int main ()
{
   //demo obj1;   //10 20
   //demo obj2(11);  //11 20
   demo obj1(11,21);  // 11 21  
   const demo obj2(11,21); // 11 21 //consat obj

   obj1.fun();//A
   obj1.gun();//A
   obj2.fun();//NA
   obj2.gun();//A

   obj1.i++;
   obj1.j++;
   obj2.i++;


  return 0;
}