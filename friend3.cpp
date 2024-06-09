#include<iostream>
using namespace std;

class test
{
    private:
    int d1, d2;
   // friend void multiply(test);   //friend function declaration
    public:
    test()      //default constructor
    {}
    test(int a, int b)    //parameterised constructor
    {
        d1 = a;
        d2 = b;
    }
    friend void multiply(test);   //friend function declaration
    void display()    // regular function declaration
    {
        cout<<"Data 1 is : "<<d1<<"\nData 2 is : "<<d2<<endl;
    }
};
    void multiply(test t)    //friend function 
    {
        int d0;
        d0 = t.d1 * t.d2;
        cout<<"Multiplication is : "<<d0;
    }

int main(){
    
    test obj(100,200);
    obj.display();   //call to regular function 
    multiply(obj);   // friend function call directly
    return 0;
}