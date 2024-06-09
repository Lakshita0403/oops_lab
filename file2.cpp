#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //----- connecting our file with laku stream -----
    ofstream laku("file1.txt");

    //------Creating a name string and filling it with the string entered by the user -------
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;

    // -------Writing a string to the file---------
     laku<<"My name is " + name;
     laku.close();

    ifstream monu("file1.txt");
    string content;
    getline(monu,content);
    // monu>>content;
    cout<<"The content of this file is: "<<content;
    monu.close();
    return 0;
}