#include<iostream>
using namespace std;

class demo
{
    int a,b;
    public:
    void getdata();
    friend int sum(demo);
};

void demo::getdata()
{
    cout<<"Enter the two numbers:";
    cin>>a>>b;
}

int sum(demo aa)
{
    return (aa.a + aa.b);
}
int main(){
    demo aa;
    aa.getdata();
    cout<<"Addition is : "<<sum(aa);
    return 0;
}