#include <iostream>
using namespace std;

class base
{
public:
   virtual void print()
    {
        cout << "print base class" << endl;
    }
   virtual void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base
{
public:
     void print()
    {
        cout << "print derived class" << endl;
    }
     void show()
    {
        cout << "show derived class" << endl;
    }
};

int main()
{
    base *basepointer;
    base b;
     basepointer = &b;
    basepointer->print();
    basepointer->show();

    derived d;
    basepointer = &d;
    basepointer->print();
    basepointer->show();

    // base b;
    // basepointer = &b;
    // basepointer->print();
    // basepointer->show();

    return 0;
}