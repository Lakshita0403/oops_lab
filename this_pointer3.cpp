#include<iostream>
#include<string.h>

using namespace std;

class person
{
    char name[30];
    float age;
    public:
    person(char *s, float a)
    {
        strcpy(name, s);
        age = a;
    }
    person & person :: greater(person & x)
    {
        if(x.age>=age)
        return x;
        else
        return *this;
    }

    void display(void)
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;

    }
};
int main(){
    person p1("Lakshita", 27.60),
           p2("Komal", 34.5),
           p3("Mahak", 45.67);
           
           person p = p1.greater(p3);
           cout<<"Elder person is: "<<endl;
           p.display();

           p = p1.greater(p2);
           cout<<"Elder person is: "<<endl;
           p.display();
    
    return 0;
}