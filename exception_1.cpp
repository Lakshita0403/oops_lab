#include<iostream>
#include<stdexcept>

/*#include<exception>
using namespace std;

int main(){
    int a = 10,b = 0;
    int c;
    try{
        if(b == 0)
        throw "divide by zero error";
    c = a/b;
    cout<<c<<endl;
    }catch(const char *e){
        cout<<"Exception occured"<<endl<<e;
    }  
    return 0;
}*/
using namespace std;
int main()
{
    int a = 10, b = 0,c;
    try{
        if(b == 0)
        throw runtime_error("divide by zero error");
        c = a/b;
         cout<<c<<endl;
    }catch(runtime_error &error) {
        cout<<"Exception occured"<<endl;
        cout<< error.what();
    }
    return 0 ;
    }
