#include<iostream>
#include<string.h>
using namespace std;

int main(){
   char * s1 = "c++";
   char * s2 = "Lakshita Garg";
   int m = strlen(s1);   
   int n = strlen(s2);

   for(int i=1;i<n;i++)
   {
    cout.write(s2,i)<<endl;
   }  

   for(int i=n;i>0;i--)
   {
    cout.write(s2,i)<<endl;
   } 

   // Concatenating strings
   cout.write(s1,m).write(s2,n)<<endl;

   // Crossing the bouondary
   cout.write(s1,10);
    
    return 0;
}