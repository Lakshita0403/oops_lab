#include<iostream>
using namespace std;

template<class T>      // function template
void show(T a, T b)
{
    cout<<"A="<<a<<endl<<"B="<<b<<endl;
}

int main(){
    int p=10, q=20;
    char m='a',n='b';
    float s=10.345, f=67.789;
    show(p,q);
    show(m,n);
    show(s,f);
    return 0;
}