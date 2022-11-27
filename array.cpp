#include <iostream>

using namespace std;


class Array
{
   public:
     int iSize;
     int *Arr;
   Array (iLength)
   {
     iSize = iLength;
     Arr = new int [iSize];
   }
   ~Array
   {
      delete []Arr;
   }
   void Accept()
   {
      cout<<"enter the value\n";

      for(i=0; i < iSize; i++)
      {
         cin>>Arr[i]<<"\n";
      }
   void Display()
   {
      cout<<"element of arrray\n";

      int 

      for(i=0; i < iSize; i++)
      {
         cin>>Arr[i]<<"\n";
      }
   }
};
int main()
{

   Array obj1(4);
   obj1.Accept();
   obj2.Display();
   return 0;
}