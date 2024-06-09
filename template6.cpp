#include<iostream>
using namespace std;

template <class type>
class stack
{
    type a[5];
    int top;

    public:
    stack()
    {
        top=-1;    //stack is empty
    }

    void push(type var)
    {
        a[++top]=var;    //pre-increament operator
    }

    type pop()
    {
        return a[top--];
    } 
};

int main(){
    stack<int> s1;
    s1.push(10);
    s1.push(30);
    s1.push(60);

    cout<<"1st pop value= "<<s1.pop()<<endl;
    cout<<"2nd pop value= "<<s1.pop()<<endl;
    cout<<"3rd pop value= "<<s1.pop()<<endl;
    
     stack<float> s2;
    s2.push(10.61);
    s2.push(30.67);
    s2.push(60.34);

    cout<<endl<<"1st float pop value= "<<s2.pop()<<endl;
    cout<<"2nd float pop value= "<<s2.pop()<<endl;
    cout<<"3rd float pop value= "<<s2.pop()<<endl;
    
    return 0;
}