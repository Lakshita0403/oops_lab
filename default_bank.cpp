#include<iostream>
using namespace std;

int main(){
    float amount;
    float value(float p, int n, float r=0.15);
    void printline(char ch='*',int len=40);
    printline();  //call
    amount=value(5000.00,5);   //call
    cout<<"\n final value="<<amount<<"\n\n";
    printline('=');
    return 0;
}
float value(float p,int n, float r)
{
    int year=1;
    float sum=p;
    while(year<=n)
    {
     sum=sum*(1+r);
     year=year+1;   
    }
    return(sum);
}