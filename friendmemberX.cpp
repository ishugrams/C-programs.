#include<iostream>

using namespace std;

class Demo
{
  public:
      int i;
  private:
      int j;
  protected:
      int k;
  public:
      Demo()
     {
       i = 10;
       j =20;
       k = 30;
     }
     friend void fun();
};

class Marvellous
{
void fun()   //naked function means class chya baher ahe
{
  Demo obj;
  cout<<"value of i:"<<obj.i; 
  cout<<"value of j:"<<obj.j;
  cout<<"value of k:"<<obj.k;
}
};


int main()
{
 fun(); 
 return 0;
}
