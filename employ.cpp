#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    float salary;
    void insert(int i, string n, float s)
{
    id = i;
    name = n;
    salary = s;
}

void display(){
    cout<<id<<" "<<name<<" "<<salary<<endl;
}
};

int main(){
    Employee a1;
    Employee a2;
    a1.insert(405,"Lakshita",99000);
    a2.insert(134,"Krishna",45000);
    a1.display();
    a2.display();
    return 0;
}