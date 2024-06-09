#include <iostream>
using namespace std;

class demo
{
    int x, y;
    static int z;

public:
    void getdata()
    {
        cout << "Enter two numbers:";
        cin >> x >> y;
        z++;
    }
    void putdata()
    {
        cout << "\n X=" << x << "\tY=" << y;
        cout << "\nStatic Z=" << z<<endl;
    }
    static void print()
    {
        cout << "Staic Variable:" << z;
    }
};

int demo::z;
int main()
{
    demo aa, bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    cout << "Static Method Called:";
    demo::print();
    return 0;
}
