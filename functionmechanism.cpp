#include <iostream>
using namespace std;


//call by adddresss 
void fun(int no)
{
   cout<<"inside call by value: "<<no<<"\n";
   no++;
}

//call by referance
void gun(int *p)
{
   cout<<"inside call by adresss: "<<*p<<"\n";
   (*p)++;
}

//call by referance
void sun(int &ref)
{
   cout<<"inside call by referance: "<<ref<<"\n";
   ref++;
}

int main()
{
  int i = 10;   
  int j = 10;  
  int k = 10;


  fun(i);  //fun(10);
  cout<<i<<"\n";
  gun(&j);  //gun(200);
  cout<<j<<"\n";
  sun(k);   //sun(k)
  cout<<k<<"\n";

  return 0;
}
