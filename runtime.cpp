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

       void gun(int i)
       {
         cout<<"Base gun With one integer\n";

       }
       void gun(int i,int j)
       {
         cout<<"Base gun with two integers\n";

       }
};

class Derived:public Base
{
   public:
      int X,Y;

      void sun()
      {
        cout<<"Derived sun\n";
      }

      void fun()
      {
        cout<<"Derived fun\n";
      }
};
int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun();

    return 0;
}