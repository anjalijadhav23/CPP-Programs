#include<iostream>
using namespace std;

class Base 
{
  public:
      int A,B;

      Base()
      {

         cout<<"Inside Base constructor\n";
      }

      ~Base()
      {

        cout<<"Inside Base Dectructor\n";
      }

      void fun()
      {
        cout<<"Inside Base fun\n";
      }
};

  class Derived:public Base
  {
    public:
    int X,Y;
    
    Derived()
    {
        cout<<"Inside Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Inside Derived Destructor\n";
    }

    void gun()
    {
      cout<<"Inside gun Function\n";
    }

  };

  class DerivedX:public Derived
  {
    public:
    
    int i,j;
    DerivedX()
    {
      cout<<"Inside DerivedX constructor\n";

    }

    ~DerivedX()
    {

      cout<<"Inside DerivedX destructor\n";
    }

    void sun()
    {
      cout<<"Inside Sun function\n";
    }

  };
int main()
{
  cout<<"Sizeof Base:"<<sizeof(Base)<<"\n";
  cout<<"Sizeof Derived:"<<sizeof(Derived)<<"\n";
  cout<<"Sizeof DerivedX:"<<sizeof(DerivedX)<<"\n";

  DerivedX dobj;

  dobj.fun();
  dobj.gun();
  dobj.sun();

    return 0;
}