#include<iostream>
#include<stdexcept>

using namespace std;
int main()
{
    try{
        throw 20;

        //throw runtime_error("error");
    }catch(int error){
        cout<<error<<endl;
    }

    catch(...){
        cout<<"some exception occured"<<endl;
    }
    return 0;
}