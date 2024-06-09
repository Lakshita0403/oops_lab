#include<iostream>
using namespace std;

class practice
{
    float a;
    float b;
    public:
    practice()
    {}   // default constructor
    practice(float real, float img)  //parameterised constructor
    {
        a = real;
        b = img;
    }
    practice operator+(practice);  // binary operator overloading
    void display();      //display function
};

practice practice::operator+(practice p)
{
    practice temp;
    temp.a = a+p.a;
    temp.b = b+p.b;
    return temp;
}

void practice::display(void)
{
    cout<<a<<" + i"<<b<<"\n";
}

int main()
{
    practice p1,p2,p3;
    p1 = practice(3.5,4.5);  // invokes constructor 1
    p2 = practice(6.5,2.5);  //invokes constructor 2
    p3 = p1+p2;

cout<<"p1 = "; p1.display();
cout<<"p2 = "; p2.display();
cout<<"p3 = ";p3.display();
    return 0;

}
