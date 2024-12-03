#include<iostream>
using namespace std;
void fun()
{
    cout<<"Rb Chauhan";
}
int main()
{
    fun(); // 1....
for(int i=1; i<=10; i++) // loop 2.....
{
  fun();
  cout<<"\n";
}
}