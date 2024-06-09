// Overloading of Template Functions
#include<iostream>
#include<string>

using namespace std;

template<class T>
void display(T x)
{
    cout<<"Template display: "<<x<<"\n";
}

void display(int x)
{
    cout<<"Explicit display: "<<x<<"\n";
}
int main(){
    display(167);
    display(12.4567);
    display('c');
    return 0;
}