#include<iostream>
using namespace std;

class A
{
    public:
    void message()
    {
        cout<<"Welcome to hierarchical Inheritance!!"<<endl;
    }
};

class B:public A
{
    public:
    void display()
  {
    cout<<"Inside class B "<<endl;
  }
};

class C:public A
{
    public:
    void putdata()
    {
        cout<<"Inside class C "<<endl;
    }
};

int main(){
    B aa; C bb;
    aa.message();
    aa.display();
    bb.putdata();
  //  bb.message();
    
    return 0;
}