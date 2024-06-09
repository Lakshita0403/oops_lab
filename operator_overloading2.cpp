#include<iostream>
using namespace std;

class example
{
    int x;
    public:
    void input()
    {
        cout<<"Enter a number:"<<endl;
        cin>>x;
    }
   // void operator++(int)  //postfix
   void operator++()
    {
        x=x+1;
    }
    void output()
    {
        cout<<"value of x is:"<<x<<endl;
    }
};
int main()
{
    example aa;
    aa.input();
    cout<<"value Before increament!"<<endl;
    aa.output();
   // aa++;  //postfix
   ++aa;    //prefix
    cout<<"Value After increament!"<<endl;
    aa.output();
    return 0;
}