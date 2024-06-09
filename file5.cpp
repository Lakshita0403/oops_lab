#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n; char str[20];
    //for reading from a file we use ifstream stream class 
    ifstream ifs;
    ifs.open("file5.txt");
    ifs>>n>>str;
    cout<<n<<" "<<str;
    ifs.close();
    return 0;
}