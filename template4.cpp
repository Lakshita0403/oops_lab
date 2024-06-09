#include<iostream>
using namespace std;

template <class cool>
void swapp(cool &p, cool &q)
{
    cool temp;
    temp=p;
    p=q;
    q=temp;
} 
int main(){
    int a=10, b=23;
    float f1=12.10, f2=40.69;
    char c1='A', c2='B';

    cout<<"BEFORE SWAPPING:\n";
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    cout<<"f1 = "<<f1<<"\tf2 = "<<f2<<endl;
    cout<<"c1 = "<<c1<<"\tc2 = "<<c2<<endl;

    swapp(a,b);
    swapp(f1,f2);
    swapp(c1,c2);

cout<<"AFTER SWAPPING:\n";
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    cout<<"f1 = "<<f1<<"\tf2 = "<<f2<<endl;
    cout<<"c1 = "<<c1<<"\tc2 = "<<c2<<endl;

    return 0;
}