#include<iostream>
using namespace std;

int count = 0;
class demo{
    public:
     demo()
     {
        count++;
        cout<<"No.of object created:"<<count<<endl;
     }

     ~demo()
     {
        cout<<"No.of objects destroyed:"<<count<<endl;
        count--;
     }
};
int main(){
    demo aa,bb;
    demo tt,dd,cc;
    
        demo pp;
    
    return 0;
}