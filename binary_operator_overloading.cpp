#include<iostream>
using namespace std;
class multiply
{
    int x,y;
    public:
    void getdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"first is : "<<x<<endl<<"second is : "<<y<<endl;
    }
    multiply operator*(multiply c)
    {
        multiply temp;
        temp.x  = x*c.x;
        temp.y  = y*c.y;
        return temp;
    }
};

int main()
{
    multiply o1,o2,o3;
    o1.getdata(15,20);
    o2.getdata(3,45);
    o3 = o1*o2;
    o3.display();
    return 0 ;
}