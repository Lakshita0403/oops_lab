#include<iostream>
using namespace std;

class Phone{
    public:
    double cost;
    int slots;
};

int main(){
    Phone vivo;
    Phone realme;

    vivo.cost = 21000;
    vivo.slots = 2;

    realme.cost = 25000;
    realme.slots = 2;

    cout<<"cost of vivo : "<<vivo.cost <<endl;
    cout<<"cost of realme : "<<realme.cost <<endl;

    cout<<" Number of car slots for vivo : "<< vivo.slots<<endl;
    cout<<" Number of car slots for realme : "<< realme.slots<<endl;
    
    return 0;
}