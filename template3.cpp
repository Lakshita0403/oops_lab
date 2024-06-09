#include<iostream>
using namespace std;
template <class type>
type max1(type a,type b)
//template <class type,class type2>
//type max1(type a,type2 b)
{
    if(a>b)
    return a;
    else
     return b;
}
int main(){
    cout<<"Max no. is= "<<max1(10,30)<<endl;
   // cout<<"Max no. is= "<<max1(10,30.15)<<endl;
    cout<<"Max no. is= "<<max1(10.56,20.7)<<endl;
    cout<<"Max no. is= "<<max1('A','B')<<endl;
    return 0;
}