// Function with two generic types

#include<iostream>
//#include<string>

using namespace std;

template<class T1, class T2>
void display(T1 x, T2 y)
{
    cout<<x<<" "<<y<<"\n";
}
int main()
{
    display(1999,"Krishna");
    display(12.345,'l');
    return 0;
}