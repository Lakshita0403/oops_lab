#include<iostream>
using namespace std;

class demo
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter a number:\n";
        cin>>a;
    }
    void putdata()
    {
        cout<<"value of a = "<<a<<endl;
    }
    demo operator+(demo bb)
    {
        demo cc;
        cc.a = a+bb.a;
        return cc;
    }
};
int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc = aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}