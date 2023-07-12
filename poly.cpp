#include<iostream>
using namespace std;
class Overloading
{
    public:
   int Add(int a,int b)
    {
        cout<<"Addition of integers\n";
    }

    float Add(float a,float b)
    {
        cout<<"Addition of floats\n";
    }

    double Add(double a,double b)
    {
        cout<<"Addition of doubles\n";
    }
    
    int Add(int a,int b,int c)
    {
        cout<<"Addition of 3 integers\n";
    }
};

int main()
{
    Overloading obj;
    obj.Add(11,21);
    obj.Add(11,21,51);
    obj.Add(11.21,2.3);
    obj.Add(11.2f,21.2f);
    return 0;
}