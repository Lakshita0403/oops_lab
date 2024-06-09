#include<iostream>
using namespace std;
 
 class sample
 {
    int a,b;
    public:
    void getdata(int i, int j)
    {
        a = i;
        b = j;
    }
    friend float avg(sample s);
 };

 float avg(sample s)
 {
    return float(s.a+s.b)/2.0;
 }
int main(){
    sample s;
    s.getdata(10,21);
    cout<<"Average is : "<<avg(s);
    
    return 0;
}