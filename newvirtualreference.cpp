#include<iostream>
using namespace std;
class Base 
{
   public:
       int A,B;

       void fun()
       {
        cout<<"Base Fun\n";
       }

        virtual void gun()
       {
         cout<<"Base gun\n";

       }
        virtual void sun()
       {
         cout<<"Base sun\n";

       }
         virtual void run()
      {
        cout<<"Base run\n";
      }
};

class Derived:public Base
{
   public:
      int X,Y;

      void gun()
      {
        cout<<"Derived gun\n";
      } 

      virtual void run()
      {
        cout<<"Derived run\n";
      }
nn
       virtual void mun()
      {
        cout<<"Derived mun\n";
      }
};

int main()
{

    Derived  dobj;
    Base &bref=dobj;     //upcasting
    //bref is a reference of type base refering to dobj which is the object of derived class
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun();


    return 0;
}