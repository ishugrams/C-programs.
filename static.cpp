#include<iostream>

using namespace std;

class Demo
{
  public:
    int i;    //instance variable 
    int j;     //instance varialbe
    static int k;  //memory milele jthe tumhi static segment tyaar keli tithe  //class variable
    static int la;

    Demo()  //default constructor
    {
      i = 0;
      j = 0;              
    }

    Demo(int a, int b) //paramitarized constrauctor
    {
      i = a;
      j = b;              
    }

    void fun()    //instance method

    {
     //static + nonstatic 
     cout<<"inside non static method fun\n";
     cout<<"value of i :"<<this->i<<"\n";
     cout<<"value of j :"<<this->j<<"\n";
     cout<<"value of k :"<<this->k<<"\n";
     cout<<"value of l :"<<this->la<<"\n";     
    }

    static void gun()  //class method
    {
      //static 
      cout<<"Inside static method gun\n";
      cout<<"value of k :"<<k<<"\n";
      cout<<"value of la :"<<la<<"\n";
 
    }

};

//load time variables
int Demo::k = 0;  //::scope resolution operator
int Demo::la = 0;   //static method karta this pointer ch nasto

int main()
{
  cout<<"Inside main\n"; 
  cout<<"value of k: "<<Demo::k<<"\n";
  cout<<"value of la: "<<Demo::la<<"\n";
  Demo::gun();  
  Demo obj1(10,11);
  Demo obj2(20,21);
  Demo obj3;

  cout<<"value of i in obj1: "<<obj1.i<<"\n";
  cout<<"value of i in obj2: "<<obj2.i<<"\n";

  cout<<"value of j in obj1: "<<obj1.j<<"\n";
  cout<<"value of j in obj1: "<<obj1.j<<"\n";

  obj1.fun(); //fun(obj1);
  obj2.fun();

  obj1.gun(); //Demo::gun();  //karu naka
  return 0;
}


//size of object is samation  of size of its non static charactaristics
//sizeof(obj) = sizeof(i) + sizeof(j);
//sizeof(obj) = 4 + 4;
//sizeof(obj) = 8