#include<iostream>
using namespace std;

//class onetoten{
    class tentoone{
    public:
    void putdata()
    {
        int i;
      //  for(i=1;i<=10;i++)
      for(i=10;i>=1;i--)
        cout<<"\n"<<i;
    }
};
int main(){
   
   // onetoten tt;
   tentoone pp;
   // tt.putdata();
   pp.putdata();
    return 0;
}