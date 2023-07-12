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
int main() 
{
    Derived*ptr=NULL;
    ptr=new Derived;

    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}