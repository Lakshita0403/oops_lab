#include<iostream>
using namespace std;
 class A
 {
    protected:
    int roll;
    public:
    void getroll()
    {
        cout<<"enter roll:";
        cin>>roll;
    }

    void putroll()
    {
        cout<<"Roll no."<<roll<<endl;
    }
 };

 class B: public A
 {
    protected:
    int s1,s2;
    public:
    void getmarks()
    {
        cout<<"Enter marks of two subjects:"<<endl;
        cin>>s1>>s2;
    }
    void putmarks()
    {
        cout<<"marks 1 = "<<s1<<" & marks 2 = "<<s2<<endl;
    }
 };

 class C:public B
 {
    int sptm;
    public:
    void getsptm()
    {
        cout<<"Enter sports marks: ";
        cin>>sptm;
    }
    void total()
    {
        putroll();
        putmarks();
        cout<<"Total Marks: "<<s1+s2+sptm<<endl;
        cout<<"sports = "<<sptm<<endl;
    }
 };
    int main()
    {
        C aa;
        aa.getroll();
        aa.getmarks();
        aa.getsptm();
        aa.total();
        return 0;

    }