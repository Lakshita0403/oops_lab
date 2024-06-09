#include<iostream>
using namespace std;

void test(int p)
{
    try
    {
        if(p == 0) 
        throw p;
        if(p == -1) 
        throw 'x';
        if(p == 1) 
        throw 1.0;
        if(p==2)
        throw "lak";
    }
    catch(...)
    {
        cout<<"caught an exception\n";
    }
}
int main(){
    cout<<"Testing Generic Catch\n";
    test(-1);
    test(0);
    test(1);
    test(2);
    return 0;
}