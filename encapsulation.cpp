#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void show()
    {
        cout<<"Enter values:";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;

    }

    void sum()
    {
        cout<<"Enter values:";
        cin>>a>>b;
        cout<<"Sum:"<<a+b<<endl;
    }

};
int main(){
    
    A ob1,ob2;
    ob1.show();
    ob2.sum();
    
    return 0;
}