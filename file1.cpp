#include<iostream>
#include<fstream>

  /*
  The useful classes for working with files in c++ are:
  1. fstreambase
  2. ifstream -->derived from fstreambase
  3. ofstream -->derived from fstreambase
  */

  /* 
  In order to work with files in c++, you will have to open it. Primarily, there are two ways to open a file:
  1. Using the constructor
  2. using the member function open() of the class
  */
using namespace std;

int main(){
    string st = "Lakshita the don ";
    string st2;
    // Opening files using constructor and writing it
    // ofstream out("file1.txt");   //write operation
    // out<<st;  

    //opening files using constructor and reading it
    ifstream in("file2.txt");   // Read Operation
    //in>>st2; 
    getline(in,st2);
    // getline(in,st2);
    // getline(in,st2);
    // getline(in,st2);
    cout<<st2;
    return 0;
}