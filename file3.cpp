#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(){
    ofstream out;
    out.open("file1.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is me and lakshii\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("file2.txt");
   // in>>st >>st2;
   // cout<<st <<endl<<st2;

    while(in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}