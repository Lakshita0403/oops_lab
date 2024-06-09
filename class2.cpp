#include<iostream>
using namespace std;

//class oddeve{
    //class posnegzero{
        class maxi{
    int c,d;
    public:
    void getdata();
    void putdata();
};

//void posnegzero::getdata(){
    void maxi::getdata(){
    //cout<<"Enter the number :";
    cout<<"Enter two numbers:";
  //  cin>>n;
  cin>>c>>d;
}

//void posnegzero::putdata()
void maxi::putdata()
{
    // if(n>0)
    // cout<<"positive";
    // else if(n<0)
    // cout<<"negative";
    // else
    // cout<<"zero";
    if(c>d)
    cout<<"max is = "<<c;
    else 
    cout<<"max is = "<<d;
}

int main()
   // posnegzero bb;
  {
   maxi cc;
    //bb.getdata();
    //bb.putdata();
    cc.getdata();
    cc.putdata();

    return 0;
}