#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<<a+b<<"\n";
}
void add(int a, int b, int c)
{
    cout<<a+b+c<<"\n";
}

int main(){
    add(5,10);
    add(4,8,12);
    return 0;
}