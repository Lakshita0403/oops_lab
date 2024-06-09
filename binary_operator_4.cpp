/* use binary (+) operator to add two complex numbers. */  
#include<iostream>
using namespace std;

class complex{
    // declare data member or variables
    int x, y;
    public:
    //create a member function to input
    void input()
    {
        cout<<"Input two complex numbers:"<<endl;
        cin>>x>>y;

    }
    //use binary '+' operator to overload
    complex operator +(complex obj)
    {
        // create an object
        complex a;
        //assign values to object
        a.x = x+obj.x;
        a.y = y+obj.y;
        return(a);
    }

    // overload the binary(-)operator
    complex operator -(complex obj)
    {
        // create an object
        complex a;
        // assign values to object
        a.x = x-obj.x;
        a.y = y-obj.y;
        return(a);
    }
    // display the result of addition
    void print()
    {
        cout<<x<<"+"<<y<<"i"<<"\n";
    }

    // display the result of subtraction
    void print2()
    {
        cout<<x<<"-"<<y<<"i"<<"\n";
    }
};

int main(){
    complex x1, y1, sum, sub; // here we created object of class Addition i.e x1 and y1
    // accepting the values
    x1.input();
    y1.input();
    // add the objects
    sum = x1 + y1;
    sub = x1 - y1; // subtract he complex number
    //display user entered values
    cout<<"\n Entered values are:\n";
    cout<<"\t";
    x1.print();
    cout<<"\t";
    y1.print();
    cout<<"\nThe addition of two complex(real and imaginary)numbers: ";
    sum.print(); // call print function to display the result of addition  

    cout << "\nThe subtraction of two complex (real and imaginary) numbers: ";  
    sub.print2(); // call print2 function to display the result of subtraction 
    return 0;
}