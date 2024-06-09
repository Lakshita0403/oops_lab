#include<iostream>
using namespace std;

inline int square(int a)
{
    return a*a;
}
inline int cube(int b)
{
    return b*b*b;
}
int main(){
    cout<<"Square of 10 = "<<square(10)<<endl;
    cout<<"Cube of 4 = "<<cube(4);

    return 0;
}