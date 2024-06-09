#include<iostream>
using namespace std;

class reverse
{
    int n;
    public:
    void getdata();
    void putdata();
};

void reverse::getdata(){
    cout<<"Enter the number to be reverse:";
    cin>>n;
}

void reverse::putdata(){
    int rev = 0;
    while(n>0)
    {
        rev = rev*10+n%10;
        n = n/10;
    }
    cout<<"\n Reverse is :"<<rev;
}
int main(){
    reverse ss;
    ss.getdata();
    ss.putdata();
    return 0;
}