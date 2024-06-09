#include <iostream>
using namespace std;

class Box
{
public:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box aa;
    Box bb;
    double volume = 0;

    // box 1 specialisation
    aa.height = 4.0;
    aa.length = 6.0;
    aa.breadth = 7.0;

    // box 2 specialisation
    bb.height = 9.0;
    bb.length = 3.0;
    bb.breadth = 2.0;

// volume of box 1
volume = aa.height*aa.length*aa.breadth;
cout<<"Volme of box 1 : "<< volume <<  endl;

// volume of box 2
volume = bb.height*bb.length*bb.breadth;
cout<<"Volme of box 2 : "<< volume <<  endl;

    return 0;
}