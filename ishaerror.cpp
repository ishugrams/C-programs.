#include<iostream>

using namespace std;

class Demo
{
  public:
    int x;
    int y;

    Demo()
    {
      cout<<"inside constructor"<<"\n";
    }
  ~Demo()
    {
      cout<<"inside the destructor"<<"\n";
    }
    void Fun()
    {
      cout<<"inside the fun"<<"\n";
    }
};

int main()
{
  Demo obj1;
  Demo *ptr = NULL;
  ptr = new Demo;
  ptr->Fun();
  delete ptr;

  return 0;
}