#include<iostream>
using namespace std;
#include<string.h>
int main()
{
   char p[20];
   cout<<"Enter Str\n";
   cin>>p;
   if(p == strrev(p))
   {
    cout<<"Yas\n";
   }
   else
   {
    cout<<"no\n";
   }

}