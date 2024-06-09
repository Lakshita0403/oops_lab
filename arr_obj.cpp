#include <iostream>
using namespace std;

class demo
{
    int n;

public:
    void getdata()
    {
        cout << "Enter the value of N:";
        cin >> n;
    }
    void putdata()
    {
        cout<<"\n"<<n;
    }
};

int main()
{
    demo aa[6];
    for (int i = 0; i < 6; i++)
        aa[i].getdata();
    for (int i = 0; i < 6; i++)
        aa[i].putdata();
    return 0;
}
