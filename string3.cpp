#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char c[40];
    cout<<"Enter text: "<<endl;
    cin.getline(c,40);
    for(int i=1;i<=12;i++)
    {
        cout.write(c,i);
        cout<<endl;
    }

    for(int i=12;i>=1;i--)
    {
        cout.write(c,i);
        cout<<endl;
    }

}