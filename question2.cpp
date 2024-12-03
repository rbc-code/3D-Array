#include<iostream>
using namespace std;
int dealer (int ltr)
{
    return 90*ltr;
}
int main()
{
    int ltr;
    cout<<"Enter ltr\n";
    cin>>ltr;
    cout<<"Bill Rate ="<<dealer(ltr)+(5*ltr);
}
