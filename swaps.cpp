#include<iostream>
using namespace std;
void swaps(int a, int b) // formal parameter // parameter
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"after swap value of a="<<a<<"\n";
    cout<<"after swap value of b="<<b<<"\n";
}
int main()
{
    int a,b;
    cin>>a>>b;
    swaps(a,b); // actual parameter // argument // call by value
}