#include<iostream>
using namespace std;
void fun(int arr[], int l)
{
    for(int i=0; i<l; i++)
    {
        cout<<arr[i]+10<<"\n";
    }
}
int main()
{
    int arr[]={2,5,8,9,5,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    fun(arr,s);
}