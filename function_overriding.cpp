#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"\n Inside Base class";
    }
};

class B:public A
{
    public:
    void display()
    {
        cout<<"\n Inside Derived class";
      //  A::display();    1st method to call class A object
    }
};

int main(){
    B aa;
    aa.display();
    aa.A::display();    //2nd method to call class A object..
    return 0;
}