#include<iostream>
using namespace std;

int i = 10;

int main(){
     int i = 20;  // local variable
     cout<<"Local variable i: "<<i<<"\n";
     cout<<"Global variable i: "<<::i<<"\n";

     //using scope resolution operator
    return 0;
}