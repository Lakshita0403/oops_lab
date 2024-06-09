#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char str[50];   // program of reading and writing from a file and to a file
    fstream obj;
    obj.open("file6.txt");
    cout<<"Enter data\n";
    cin>>str;
    obj<<str;
    obj.close();

    obj.open("file6.txt");
    obj.getline(str, sizeof(str));
    cout<<str;
     obj.close();
    return 0;
}