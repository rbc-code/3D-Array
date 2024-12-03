#include<iostream>
using namespace std;

int balance(int pwd)
{
    if(pwd==100)
    {
        return 10000;
    }
    else
    {
        return -1;
    }
}

int main()
{
    cout<<balance(101);   
}