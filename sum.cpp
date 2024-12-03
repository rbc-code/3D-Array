#include<iostream>
using namespace std;
int c;
void sum(int a,int b) //with parameter and no return
{
  c=a+b;
}
void show() // without parameter and no return
{
    cout<<c;
}
int main()
{
int w,p;
cout<<"Enter 2 number :\n";
cin>>w>>p;
sum(w,p); // call by value
show();
}