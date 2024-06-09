#include <iostream>
using namespace std;
class addition
/*{
   private:
   int a, b;
   public:
   void getdata()               // function defination inside class
   {
       cout<<"Enter two numbers:\n";
       cin>>a>>b;
   }
   void putdata()
   {
       cout<<" The addition is = "<<a+b;
   }
};

int main(){
   addition aa;
   aa.getdata();
   aa.putdata();
   return 0;
}*/

{
    int a, b;

public:
    void getdata();
    void putdata();
};

void addition::getdata() // function defination outside class
{
    cout << " Enter two numbers:";
    cin >> a >> b;
}
void addition::putdata()
{
    cout << " The addition is :" << a + b;
}

int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
    return 0;
};
