#include<iostream>
using namespace std;

int main(){
    try{
         
         try{
            throw "a character exception";
         }catch(const char *e){
            cout<< "Character type in inner block-->"<<e<<endl;
            cout<<"Rethrowing the exception"<<endl;
            throw runtime_error("success");
         }
    } 
    catch(const char *e){
        cout<< "character type in outer block-->"<<e<<endl;
    }
    catch(...){
        cout<<"Unexpected expression in outer block-->"<<endl;
    }
    
    return 0;
}