#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
    void output()
    {
        cout<<"value of a :"<<a<<endl;
    }
};

class B
{
    protected:
    int b;
    public:
    void input()
    {
        cout<<"Enter b"<<endl;
        cin>>b;
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
    void getdata()
    {
        cout<<"Enter c:"<<endl;
        cin>>c;
         A::input();
         B::input();
    }
    void display()
    {
        cout<<"value of c:"<<c<<endl;
    }

};
int main(){
    C aa;
    aa.getdata();
    aa.input();
    aa.output();
    aa.putdata();
    aa.display();
    return 0;
}