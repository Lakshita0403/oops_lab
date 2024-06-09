#include<iostream>
using namespace std;

class para
{
    int a,b;
    public:
    para(int m, int n)
    {
        a = m;
        b = n;
    }

    void putdata()
    {
        cout<<"a = "<<a<<"\nb = "<<b;
    }
};
int main(){

    // para aa(10,12);
    //aa.putdata();

    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    para aa(x,y);
    aa.putdata();
    //return 0;
}