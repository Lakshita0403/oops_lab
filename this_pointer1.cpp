#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    string name;
    float salary;
    employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display()
    {
        cout<<id<<" "<<name<<" "<<salary;
    }
}; 

int main(){
    employee e1(100, "lakshita",20000);
    e1.display();
    
    return 0;
}