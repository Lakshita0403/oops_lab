#include<iostream>
#include<conio.h>
using namespace std;
class A;
class B
{
    int b;
    public:
    void getval(int x)
    {
        b = x;
    }
    void putval()
    {
        cout<<"The value of B is : "<<b<<endl;
    }
    friend void add(A,B);
};

class A
{
    int a;
    public:
    int getval(int x)
    {
        a = x;
    }
    void putval()
    {
        cout<<"The value of A is : "<<a<<endl;
    }
    friend void add(A,B);
};

void add(A o1, B o2)
{
    cout<<"Addition of A and B is : "<<o1.a+o2.b<<endl;
}

int main(){
    A a;
    B b;
    a.getval(10);
    b.getval(200);
    a.putval();
    b.putval();
    add(a,b);
    return 0;
}