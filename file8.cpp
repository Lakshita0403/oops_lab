#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //Writing in two files
    ofstream lak;
    lak.open("file8_country.txt");
    lak<<"One and only Our India"<<endl;
    lak<<"United states of America"<<endl;
    lak<<"Japan"<<endl;
    lak.close();

    lak.open("file8_capital.txt");
    lak<<"New Delhi"<<endl;
    lak<<"Washington"<<endl;
    lak<<"Tokyo"<<endl;
    lak.close();

    // Reading from files
     const int N = 80;
    char line[80];

    ifstream ram;
    ram.open("file8_country.txt");
    cout<<"contents of country file :"<<endl;

    while(ram)
    {
        ram.getline(line, N);
        cout<<line<<endl;
    }
    ram.close();

    ram.open("file8_capital.txt");
    cout<<"Contents of capital file:\n";
    while(ram)
    {
        ram.getline(line,N);
        cout<< line<<endl;
    }
    ram.close();
    return 0;
}