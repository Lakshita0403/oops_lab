#include<iostream>
using namespace std;
class employee;

 class boss{
   int salary;
   public:
   boss()    //default constructor
   {}
   boss (int a)    //parameterised constructor assigned value to salary
   {
    salary = a;
   } 
   void display()
   {
    cout<<"Boss salary is : "<<salary<<endl;   //display boss salary
   }
   friend void total(boss, employee);  // friend function declaration
 };

 class employee
 {
    int salary;
    public:
    employee()
    {}
    employee(int b)
    {
     salary = b;
    }
    void display1()
    {
       cout<<"employee salary is : "<<salary<<endl;   //display employee salary 
    }
    friend void total(boss, employee);  // friend function declaration
 };
 void total(boss b, employee e)   //friend function defination
 {
    int total;
    total = b.salary+e.salary;
    cout<<"Total salary = "<<total<<endl;
 }

int main(){
    boss b1(5000);
    b1.display();
    employee e1(2500);
    e1.display1();
    total(b1,e1);
    
    return 0;
}