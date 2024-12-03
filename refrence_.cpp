#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int &b=a;  // b is refrence variable
    b=60;
    a=13;
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
}