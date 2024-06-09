#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
using namespace std;
int main(){
    int i =0;
    char *ptr[20] = {"books","television","computer","sports"};
    char str[25];
    cout<<"\n Enter your favourite leisure activity:\n";
    cin >> str;
    for(i=0; i<4; i++)
    {
        if(!strcmp(str, *ptr[i]))
        {
            cout<<"Your favourite activity "<<" is available here"<<endl;
            break;
        }
        if(i==4)
        cout<<"Your favourite "<<" not available here"<<endl;

    }
    return 0;
}