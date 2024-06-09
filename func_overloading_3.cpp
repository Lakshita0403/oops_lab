#include<iostream>
using namespace std;

void add (int, int);
void add (int, int, int);
void add (int, float);

int main(){
    add(2,3);
    add(10,20,30);
    add(12,33.6);
    
    return 0;
}
void add (int a, int b)
{
    cout<<"\n Addition="<<a+b;
}
void add (int a, float b)
{
    cout<<"\n Addition="<<a+b;
}
void add(int a, int b, int c)
{
    cout<<"\n Addition="<<a+b+c;
}