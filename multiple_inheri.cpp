#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"\n Enter number:";
        cin>>a;
    }
};

class B{
    protected:
    int b;
    public:
    void getdata()
    {
        cout<<"Enter number:";
        cin>>b;
    }
};

class C: public A, public B
{
    public:
    void addition()
    {
        cout<<" Addition = "<<a+b;
    }
};
int main(){
    C aa;
    aa.input();
    aa.getdata();
    aa.addition();
    return 0;
}