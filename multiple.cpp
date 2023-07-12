#include<iostream>
using namespace std;

class Base1
{
  public:

  int A;
  Base1()
  {
    cout<<"Inside Base1 constructor\n";
  }
  ~Base1()
  {
    cout<<"Inside Base1 Destructor\n";

  }

  void fun()
  {
    cout<<"Inside fun\n";
  }

};

class Base2
{
  public:

  int i,j,k;
   
   Base2()
  {
    cout<<"Inside Base2 constructor\n";
  }
  ~Base2()
  {
    cout<<"Inside Base2 Destructor\n";

  }

  void gun()
  {
    cout<<"Inside gun\n";
  }



};

class Derived:public Base1,public Base2
{
  public:

  int X,Y;

  Derived()
  {
    cout<<"Inside Derived constructor\n";
  }
  ~Derived()
  {
    cout<<"Inside Derived Destructor\n";

  }

  void sun()
  {
    cout<<"Inside sun\n";
  }


};

int main()
{
   Derived dobj;

   dobj.fun();
   dobj.gun();
   dobj.sun();
    return 0;
}