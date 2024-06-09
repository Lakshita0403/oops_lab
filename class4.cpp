#include<iostream>
using namespace std;

class ntoone{
    private:
    int n;
    public:
    void getdata();
    void putdata();
};

void ntoone::getdata(){
    cout<<"Enter the value of n:";
    cin>>n;

}

void ntoone::putdata(){
    int i;
    for(i=n;i>=1;i--)
    cout<<"\n"<<i;
}
int main(){
    ntoone ee;
    ee.getdata();
    ee.putdata();
    return 0;
}