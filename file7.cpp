#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //writing in a file name file7.txt
    ofstream outf("file7.txt");
    cout<<"Enter item name:"<<endl;
    char name[30];
    cin>>name;
    outf<<name<<endl;

    cout<<"Enter item cost:"<<endl;
    float cost;
    cin>>cost;
    outf<<cost;
    outf.close();

// Reading from a file name file7.txt  yoyo ;)
    ifstream cool("file7.txt");
    cool>>name;
    cool>>cost;
    cout<<endl;
    cout<<"Item name:"<<name<<endl;
    cout<<"Item cost:"<<cost<<endl;
    cool.close();
    
    return 0;
}