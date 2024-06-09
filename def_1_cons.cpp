#include<iostream>
using namespace std;
 class sample
 {
    private:
    int a, b;
    public:
    sample()
    {
        a = 4;
        b = 6;
    }
    void display()
    {
        cout<<a<<endl<<b;
    }
 };
int main(){
    sample s1;
    s1.display();
    return 0;
}