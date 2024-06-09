#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    public:
    void getdata()
    {
        cout<<"In class A"<<endl;
        cout<<a<<endl;
    }
};

class B: public A
{
    public:
    int a;
      public:
     void getdata()
    {
        cout<<"In class B"<<endl;
        cout<<a<<endl;
    }

};

class C: public A
{
 public:
    int a;
      public:
     void getdata()
    {
        cout<<"In class C"<<endl;
        cout<<a<<endl;
    }
};

class D : public B , public C
{
 public:
    int a;
      public:
     void getdata()
    {
        cout<<"In class D"<<endl;
        cout<<a<<endl;
    }
};

int main(){
    D d;
    d.a = 12;
    d.getdata();
    return 0;
}