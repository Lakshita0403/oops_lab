#include <iostream>
using namespace std;

template <class T> // class template
class show
{
    T a, b;

public:
    show(T p, T q)
    {
        a = p;
        b = q;
    }
    void showit()
    {
        cout << "A=" << a << endl
             << "B=" << b << endl;
    }
};
int main()
{
    show<int> ob(10, 20); // class_name<datatype> class_object;
    ob.showit();
}