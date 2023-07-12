#include<iostream>
using namespace std;

namespace 
{
   class Demo
   {
    public:
    int i,j;
    void fun()
    {
        cout<<"Inside fun of demo from unamednamespace\n";
    }
   };
 

}


int main()
{
   Demo obj1;
   obj1.fun();
  

    return 0;
}