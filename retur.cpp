#include <iostream>
using namespace std;
int roi()
{
    return 10;
}
int main()
{
    cout<<roi(); //print only

    int f;    
    f=roi();
    cout<<f+20;

}