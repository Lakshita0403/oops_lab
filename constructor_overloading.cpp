#include<iostream>
using namespace std;

class demo
{
    int a;
    public:
    demo(){        // DEFAULT CONSTRUCTOR
        a=10;
    }
    demo(int x)     //PARAMETERISED CONSTRUCTOR
    {
        a=x;
    }
    demo(demo &z)    //COPY CONSTRUCTOR
    {
        a=z.a;
    }

    void putdata()
    {
      cout<<"\n value of a:"<<a;  
    }
};
int main(){
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}