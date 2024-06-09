#include<iostream>
using namespace std;

class Database
{
    public:
    virtual void getname()=0;
};
class Accountant:public Database
{
    public:
    void getname()
    {
        cout<<"This is a accountant class!"<<endl;
    }
};

class Manager:public Database
{
    public:
    void getname()
    {
        cout<<"This is a manager class!"<<endl;

    }
};
 class Customer:public Database
 {
    public:
    void getname()
    {
        cout<<"This is a customer class!"<<endl;
    }
 };
int main(){
    Manager m;
    Accountant a;
    Customer c;
    
    m.getname();
    a.getname();
    c.getname();
    return 0;
}