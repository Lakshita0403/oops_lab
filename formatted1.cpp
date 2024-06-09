#include<iostream>
using namespace std;

int main(){
    // Formatted flags, Bit-fields and setf()
    
   cout.fill('*');
   cout.setf(ios::left, ios::adjustfield);
   cout.width(15);
   cout<<"TABLE 1"<<endl; 

    cout.fill('*');
    cout.precision(3);
   cout.setf(ios::internal, ios::adjustfield);
   cout.setf(ios::scientific, ios::floatfield);
   cout.width(15);
   cout<< -12.34567<<endl;

    return 0;
}