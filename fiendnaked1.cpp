#include <iostream>

using namespace std;

class Circle
{
  public:           //acccess sepifier
     float PI;     //charectaristics
     float radius;
     
     Circle()   //default constructor
     {
       PI = 3.14;
       radius = 0.0;
     }
     Circle(float A, float B)   //concreat  method  //parametarized constrector ahe
     {
       PI = A;
       radius = B;
     }
     void Display()   //concreat method
     {
       cout<<"value of radius is:"<<radius<<"\n";
     }
     virtual float Area() = 0;    //sevatiti equal to 0 asel tar te pure function ahe //abstract method
     virtual float Circumfarance() = 0;   //abstract method
};


class Marvellous : public Circle    //if class contain pure virtual function asel tar tyacha next madhi object tayaar //karta yet nahi
{    
   public:
      Marvellous() : Circle()
      {
      }
      Marvellous(float X, float Y) : Circle(X,Y)
      {
      
      }
      float Area()    //concreat
      {
       float Ans = PI * radius * radius;
       return Ans;   
      }
      float Circumfarance()  //concreat
      {
       float Ans = 0.0;
       Ans = 2 * PI * radius;
       return Ans;
      }
};
int main()
{
  Marvellous mobj1;
  Marvellous mobj2(3.14,10.89);
  
  float fret = 0.0;

  fret = mobj1.Area();
  cout<<"Area is: "<<fret<<"\n";
  
  fret = mobj2.Circumfarance();
  cout<<"circumfarance is:"<<fret<<"\n";

  return 0;
}