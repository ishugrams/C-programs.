#include <iostream>

using namespace std;

class demo
{
   public:
      int A, B;
demo(int i = 0 , int j = 0)
{
  A = i;
  B = j;
}
};

demo operator +(demo obj1, demo obj2)
{
  cout<<"inside the + operator function\n";
  return demo(obj1.A+obj2.A, obj2.A+obj2.B);
}

int main()
{
  demo X(10,20);
  demo Y(30.40);
  demo Ans(0,0);

  Ans = X + Y;
  return 0;
}