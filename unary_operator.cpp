#include<iostream>
using namespace std;
 
 class unary
 {
    int x,y,z;
    
    public:
    void getdata(int a,int b,int c)
    {
    x=a;
    y=b;
    z=c;
    }
    void display()
    {
   cout<<"X = "<<x<<"\nY = "<<y<<"\nZ = "<<z<<endl;
    }
    void operator-()
    {
    x=-x;
    y=-y;
    z=-z;
    }  //overload unary operator
 };

 int main()
 {
    unary s;
    s.getdata(10,-25,35);   //value passed in x, y, z
    s.display();   //Display X = 10 Y = -25 Z = 35
    -s;      // This will call overloading function
    s.display();
    return 0;
 }