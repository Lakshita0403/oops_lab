#include<iostream>
using namespace std;

class product{
    private:
    string Pname;
    int number;
    float price;
    public:
    void getdata(string name,int n, float p)
    {
        Pname = name;
        number = n;
        price = p;
    }
    void display(){
        cout<<"Product name: "<<Pname<<endl;
        cout<<"Product quantity: "<<number<<endl;
        cout<<"Product price: "<<price<<endl;
    }
    float pri()
    {
        float p = number*price;
        return p;
    }
};

int main(){
    product s;
    string n;
    int q;
    float p;
    cout<<"Enter product name: ";
    getline(cin,n);
    cout<<"Enter product quantity: " ;
    cin>>q;
    cout<<"Enter product price: ";
    cin>>p;
    s.getdata(n,q,p);
    s.display();
    return 0;
}