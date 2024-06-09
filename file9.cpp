#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    const int size = 80;
    char line[size];

    ifstream obj1, obj2;
    obj1.open("file8_country.txt");
    obj2.open("file8_capital.txt");

    for(int i=1; i<=10; i++)
    {
        if(obj1.eof()!=0)
        {
            cout<<"Exit from country"<<endl;
            exit(1);
        }
      obj1.getline(line,size);
      cout<<"capital of "<<line;

     if(obj2.eof()!=0)
        {
            cout<<"Exit from capital"<<endl;
            exit(1);
        }
      obj2.getline(line,size);
      cout<<endl<<line<<endl;
    }
    return 0;
}