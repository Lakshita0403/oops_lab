#include<iostream>
using namespace std;

class A
{
    public:
   virtual void display()
    {
        cout<<"Hi viewers, This is class A display function!"<<endl;
    }
};

class B:public A
{
    public:
    void display()
    {
        cout<<"Hi viewers, This is class B display function!"<<endl;
    }
};
int main(){
    A *a;
    B b;
    a=&b;
    a->display();
    return 0;
}