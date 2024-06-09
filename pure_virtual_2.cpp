#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void getarea() = 0;   //pure virtual function 
};
class circle:public shape
{
    public:
    void getarea()
    {
        float r;
        cout<<"The radius of circle is :"<<endl;
        cin>>r;
        cout<<"Area of circle is:"<<(3.14*r*r)<<endl<<endl;

    }
};

class rectangle:public shape
{
    public:
    void getarea()
    {
        float l,b;
        cout<<"Enter length and breadth of a rectangle:"<<endl;
        cin>>l>>b;
        cout<<"The area of rectangle is : "<<l*b;
    }
};

int main()
{
    circle c;
    c.getarea();
    rectangle r;
    r.getarea();
    return 0;
}