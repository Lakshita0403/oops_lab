#include<iostream>
using namespace std;

template<class cont>
class calculator
{
    private:
    cont num1,num2;
public:
calculator(cont n1, cont n2)
{
    num1 = n1;
    num2 = n2;
}

void displayresult()
{
    cout<<"Numbers are: "<<num1<<" and "<<num2<<"."<<endl;
    cout<<"Addition is: "<<add()<<endl;
    cout<<"Subtraction is: "<<subtract()<<endl;
    cout<<"Product is: "<<multiply()<<endl;
    cout<<"Division is: "<<divide()<<endl;
}

cont add()
{
    return num1+num2;
}

cont subtract()
{
    return num1-num2;
}

cont multiply()
{
    return num1*num2;
}

cont divide()
{
    return num1/num2;
}
};

int main(){ 
    calculator<int>calint(100,40);
    cout<<"Int results:"<<endl;
    calint.displayresult();

    calculator<float>calfloat(9.6,1.4);
    cout<<endl<<"Float results:"<<endl;
    calfloat.displayresult();

    return 0;
}