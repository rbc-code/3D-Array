#include<iostream>
using namespace std;
void swaps(int &a, int &b) // call by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swaps(a,b);            // actual parameter // argument // call by value
    cout<<"after swap value of a="<<a<<"\n";
    cout<<"after swap value of b="<<b<<"\n";
}