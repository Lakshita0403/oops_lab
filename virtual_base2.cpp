#include<iostream>
using namespace std;
 
 class student
 {
    //public:
    protected:
    int rollno ;
    public:
    void get(int a)
    {
        rollno = a;
    }
     void put()
     {
        cout<<"Roll no. is :"<<rollno<<endl;
     }
 };

 class exam : virtual public student
 {
    //public:
    protected:
    float m1, m2;
    public:
    void takemarks(float marks1, float marks2)
    {
        m1 = marks1;
        m2 = marks2;
    }

    void showmarks()
    {
        cout<<" marks obtained:"<<endl;
        cout<<"marks 1 = "<<m1<<"marks 2 = "<<m2<<endl;
    }
 };

class sports: virtual public student
{
    //public:
    protected:
    float score;
    public:
    void takespmarks( float s)
    {
        score = s;
    }
  void putspmarks()
  {
    cout<<"Sports marks obtained is: "<<score<<endl;
  }
};
 class result:public exam ,public sports
 {
    //public:
    protected:
    float total;
    public:
    void display()
    {
        total = m1+m2+score;
        put();
        showmarks();
        putspmarks();

cout<<"total score is : "<<total<<endl;
 }  
 };

 int main()
 {
    result r;
    r.get(37);
    r.takemarks(94.5, 96);
    r.takespmarks(90);
    r.display();
    return 0;
 }