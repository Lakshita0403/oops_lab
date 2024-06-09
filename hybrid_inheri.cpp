#include<iostream>
using namespace std;

class LAK{
    public:
    void smile()
    {
        cout<<"Inside class Lak:)"<<endl;
    }
};

class KRISHNA:public LAK{
    public:
    void flute()
    {
        cout<<"Inside class Krishna;)"<<endl;
    }
};

class RADHA
{
    public:
    void beauty()
    {
    cout<<"Inside class Radha ;)"<<endl;
    }
};

class HEAVEN:public KRISHNA,public RADHA
{

    public:
    void hard()
    {
       cout<<"Inside class Heaven ;)"<<endl;
    }
};

int main(){
    HEAVEN hh;
    hh.smile();
    hh.flute();
    hh.beauty();
    hh.hard();
    return 0;
}
