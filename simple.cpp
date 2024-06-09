#include<iostream>
using namespace std;

class value{
    private:
    int a;
    public:
    void getdata();
   void putdata();
};

void value::getdata(){
    cout<<"Enter the value of a :";
    cin>>a;
}
void value::putdata(){
    cout<<"The value of a is as follows: "<<a;
}
int main(){
    value cc;
    cc.getdata();
    cc.putdata();
    return 0;
}