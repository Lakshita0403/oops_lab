#include<iostream>
using namespace std;

class xyz;
class abc
{
    int a;
    public:
    void getdata(int i)
    {
        a = i;
    }
    friend void max(abc, xyz);

};

class xyz
{
    int x;
    public:
    
        void getdata(int j)
        {
            x = j;
        }
friend void max(abc,xyz);
};

void max(abc a1, xyz x1)
{
    if(a1.a>=x1.x)
    cout<<"a is greater";
    else
    cout<<"x is greater";
}
int main(){
    abc a1;
    a1.getdata(45);
    xyz x1;
    x1.getdata(23);
    max(a1,x1);
return 0;
    
}