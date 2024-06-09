#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"value of a:"<<a<<endl;
    }
};

class B
{
    protected:
    int b;
    public:
    B(int y)
    {
        b=y;
    }
    void putdata()
    {
        cout<<"value of b:"<<b<<endl;
    }
};

class C:public A,public B
{
    int c;
    public:
    C(int p,int q,int r):A(p),B(q)
{
    c=r;
}
void show()
{
    cout<<"value of c:"<<c<<endl;
}
};
int main(){
    C aa(10,20,34);
    aa.display();
    aa.putdata();
    aa.show();
    return 0;
}