#include<iostream>
using namespace std;

class add
{
    public:
    void sum(int a, int b)
    {
        int s= a+b;
        cout<<"Sum: "<<s<<endl;
    }
    void sum(double a, double b)
    {
        double s = a+b;
        cout<<"Sum: "<<s<<endl;
    }
    void sum(int a, float b, int d)
{
float s = a+b+d;
cout<<"Sum : "<< s<<endl;
}
};
int main(){
    add a;
    add b;
    add c;
    a.sum(4,6);
    b.sum(2.6,3.4);
    c.sum(5.6,6.6);
    return 0;
}