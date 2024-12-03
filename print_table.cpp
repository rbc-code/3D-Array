#include<iostream>
using namespace std;
int table(int a)
{
   for(int i=1; i<=10; i++)
   {
    cout<<a*i<<"\t";
   }
}
int main()
{
    int a;
    cout<<"Enter any Number:\n";
    cin>>a;
    table(a);
}
