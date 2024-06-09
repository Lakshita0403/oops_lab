#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n; char name[20];
    // for writinig in a file we use ofstream class 
    ofstream ofs;
    ofs.open("file4.txt");
    cout<<"Enter number and name:\n";
    cin>>n>>name;
    ofs<<n<<name;
    ofs.close();

    return 0;
}