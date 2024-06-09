/* use binary (+) operator to perform the addition of two numbers. */
#include<iostream>
using namespace std;
class arith
{
    // declare data member or variable
    int x, y;
    public:
    // create a member function to take input
    void input()
    {
        cout<<"Enter the first number:";
        cin>>x;

    }
    void input2()
    {
        cout<<"Enter the second number: ";
        cin>>y;

    }

    // overloading the binary '+'  operator to add number
    arith operator + (arith &obj)
    {
        // create object
        arith a;
        // assign values to object
        a.x = x+obj.x;
        return(a);
    }
    // display the result of binar + operator
    void print()
    {
        cout<<"The sum of two numbers is: "<<x;
    }

};

int main()
{
    arith x1,y1,res;  // here we create object of the class
    // accepting the values
    x1.input();
    y1.input();
    //assign result of x1 and x2 to result
    res = x1+y1;
    // call the print() function to display the results
    res.print();
    return 0;
}
