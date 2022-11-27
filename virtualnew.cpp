#include <iostream>
using namespace std;

class Base
{
  public:
    int A,B;
    void fun() { cout<<"base fun\n"; }   //1000   defination
    virtual void gun() { cout<<"base gun\n"; }   //2000  //defination
    virtual void sun() { cout<<"base sun\n"; }    //3000 
    virtual void run() { cout<<"base run\n"; }
};




class derived : public Base
{
  public:
      int X,Y;
     void gun()  { cout<<"derived gun\n"; }  //4000  //redefination
     virtual void run()  { cout<<"derived run\n"; }   //5000
     virtual  void mun()  { cout<<"derived mun\n"; }   //6000

};

int main()
{
  //Base *bp = new derived;
  //cout<<"size of base class : "<<sizeof(Base)<<"\n";    //12
  //cout<<"size of derived class : "<<sizeof(derived)<<"\n";   //20
  Base *bp = NULL;
  derived dobj;
  bp = &dobj;  //upcasting 
  bp->fun(); //CALL 1000  //jya prakach function call ahe tyach function call hoyel pn hota derived ch
  bp->gun();  //5000//CALL //ahe pn khota ahe mahanun toh ghali gela ani mg call derived la gela mahnun second out is derived gun
  bp->sun(); //base sun//CALL  3000  //ahe pn virual ahe mg te khali gela lkhali navtha mahnun ahe tech call zala
  bp->run();  //derived run
  //bp->mun();  //error

  return 0;
}


