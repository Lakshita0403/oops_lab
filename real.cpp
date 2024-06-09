#include<iostream>
using namespace std;
 
 class mobile
 {
    private:
    string mname;
    int model;
    float price;
    public:
    void getdata(string name, int m, float p)
    {
        mname = name;
        model = m;
        price = p;
    }
    void display()
    {
        cout<<"Mobile name:"<<mname<<endl;
        cout<<"Android Version :"<<model<<endl;
        cout<<"Mobile price :"<<price<<endl;

    }
 };
int main(){
    mobile q;
    string n;
    cout<<"Enter mobile name: ";
    getline(cin,n);
    q.getdata(n, 12, 20000);
    q.display();
    return 0;
}