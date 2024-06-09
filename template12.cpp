#include<iostream>
using namespace std;

template<class T>
void test(T x,T y)
{
    cout<<" Template"<<endl;
}
template<class T>
void test(T x, T y, T z)
{
    cout<<"Template with three parameters\n";
}
void test(float w, float z)
{
    cout<<"Non-template\n";
}
int main(){
    test(1.5, 7.4);
    test('a', 'h');
    test(1, 5.6);
    test(3.5, 6.0, 8.0);
    return 0;
}